The following is a quick recap/high level view on what we are trying to do.

#Scope
From a high level, what we are trying to achieve is to recover semantic
information in programs by identifying known code and data structures in their
binary form (i.e., executable files as produced by a compiler).
The ability to so is useful for a large number of reverse engineering
applications.  But this is also a challenging process because the binary
representation of a program (i.e., what is directly executed by the CPU) is very
poor in terms of semantic information, which we can consider, more abstractly,
as "meta-data" about the program.  Without such information, we don't really
know much about what a program does (its semantics) or about its structure,
i.e., how "things" (variables, functions, data) are organized in the binary file
or in memory.

#Goals
Our first objective is to recognize known data structures in binary. However,
directly analyzing data in binary form is not practical: what we see in
practice is a large slab of binary data, with no idea where variables start and
end, how many variables there are, and how they are used in the program.

In order to identify and classify data within a program, we need to (1) look at
how the code accesses memory and (2) to infer access patterns from there. For
instance, if we observe that a function reads N integers in a row through a
loop, we can infer that these memory locations correspond to an array of
integers. However, until we actually "see" code accessing it, we have no idea
what these memory locations correponds to. In fact, we cannot even determine which
memory locations even exist before those are accessed by the program (with a few
exceptions, e.g., when information is required by the dynamic linker for
relocation, but we can safely ignore these for now).

So, our goal is to analyze low-level artifacts of code in order to infer
information about data. And this information that we infer from data will help
us infer information about high-level artifacts about code. To clarify, possible
low-level artifacts are memory accesses, CPU instructions, and things that you
would typically see in assembly, whereas high-level artifacts are high-level
notions such as present in source-code, like types (int, string, array, <struct
something>), or functional descriptions (e.g.  "function storing user input in
an array", or "function computing a sha1 hash").

#Means

We need to design a system which "maps" code access patterns to data structure
types, with the following components:

- Mechanisms to browse through binary programs, analyze code and identify
  instructions accessing memory. angr provides the required abstractions to
  implement those mechanisms.

- A set of feature vectors over assembly primitives (e.g., instructions) that
  are relevant to data structure identification.

- A mechanism to automatically generate ground truth data-structure information
  from the knowledge of a memory address. 

Note: on the longer term, we want to generalize this to something that maps
high-level, source-code level abstractions to low-level., assembly-level
primitves, not just memory access patterns <-> data structure types.

# How to use Bin2vec:

```python
from bin2vec.process_binary_for_graph import Graph
from neural_models.data_processing.parse_graphs_for_gcn import GCN

# create bin2vec graph from cfg
#binary_path is a path to binary file
bin2vec_graph = Graph(binary_path)

#train using bin2vec model
#graphs is a list of bin2vec graphs / labels is a list of corresponding labels
gcn = GCN(graphs, labels)
adjacency_matrixes , feature_matrixes , one_hot_matrixes = gcn.preprocess()
gcn.train_gcn(adjacency_matrixes, feature_matrixes, one_hot_matrixes)

```

file run_bin2vec.py contains an example of how to run bin2vec for your binaries.

you can run this file by executing the below command.

```bash
python3 run_bin2vec.py binaries/juliet_bins
```
