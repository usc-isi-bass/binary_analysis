#!/bin/bash


SRC=$1
SRC_BASENAME=`basename ${SRC} /`
BIN="${SRC_BASENAME}_bin"
mkdir ${BIN}
echo "${BIN}"
examples=(${SRC}/*/)

for d in "${examples[@]}" ; do
    folder=`basename ${d}`
    echo ${folder}
    if [ -d ${BIN}/${folder} ] ; then
        rm -rf ${BIN}/${folder}
    fi
    mkdir ${BIN}/${folder}
    for f in ${d}* ; do
        filename=`basename ${f}`
        if [[ "$filename" == -* ]] ; then
            echo "skipping ${filename}"
            continue
        fi
        # if [ -d ${f} ]; then
        #     for dir in ${f}* ; do
        #         dir_name=`basename ${dir}`
        #         mkdir bin/${folder}/${dir_name}
        #         for f1 in ${dir}/* ; do
        #             f1_basename=`basename ${f1}`
        #             if [[ "$f1_basename" == -* ]] ; then
        #                 echo "skipping ${f1_basename}"
        #                 continue
        #             fi
        #             gcc -Wpointer-arith -c ${f1} -o bin/${folder}/${dir_name}/${f1_basename}.o  -Wwrite-strings
        #         done
        #     done
        #     continue
        # fi
        # echo "filename: ${filename}"
        # echo "full filename: ${f}"
        gcc -w ${f} -o ${BIN}/${folder}/${filename}.exe -lm &>> compilation_errors.txt
    done
done
