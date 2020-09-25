#bin/bash
clear
rm -rf a.out
echo "==============="
echo "COMPLITING...."
g++  ${1}
echo "==============="
echo "LITNTING...."
echo "==============="
cpplint ${1}
echo "==============="
echo "OUTPUT"
echo "==============="
./a.out