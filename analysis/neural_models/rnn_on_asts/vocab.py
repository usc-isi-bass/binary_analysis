from collections import defaultdict

class Vocab():
    def __init__(self):
        self.word_to_index = {}
        self.index_to_word = {}
        self.word_freq = defaultdict(int)
        self.total_words = 0
        self.vocab_size = 0
        self.unknown = '<unk>'
        self.add_word(self.unknown, count=0)
    
    def add_word(self, word, count=1):
        if word not in self.word_to_index:
            index = len(self.word_to_index)
            self.word_to_index[word] = index
            self.index_to_word[index] = word
        self.word_freq[word] += count
    
    def add_all_children_words(self, node):
        if node is None:
            return
        self.add_word(node.word)
        if not node.isLeaf:
            self.add_all_children_words(node.left)
            self.add_all_children_words(node.right)
    
    def construct_from_trees(self, trees):
        for t in trees:
            self.add_all_children_words(t.root)
        self.total_words = float(sum(self.word_freq.values()))
        self.vocab_size = len(self.word_freq)
        print ('{} total words with {} uniques'.format(
            self.total_words, self.vocab_size))
    
    def construct(self, words):
        for word in words:
            self.add_word(word)
        self.total_words = float(sum(self.word_freq.values()))
        self.vocab_size = len(self.word_freq)
        print ('{} total words with {} uniques'.format(
            self.total_words, self.vocab_size))

    def encode(self, word):
        if word not in self.word_to_index:
            word = self.unknown
        return self.word_to_index[word]

    def decode(self, index):
        return self.index_to_word[index]
    
    def __len__(self):
        return len(self.word_freq)
    
    
