#!/bin/sh
echo "WHAT IS YOUR NAME"
read NAME
echo "MY NAME IS $NAME"
mkdir $NAME
cd $NAME
for i in 1 2 3 4 5
do
touch $NAME$i.cpp
done

