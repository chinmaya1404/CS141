#!/bin/sh
echo "WHAT IS YOUR NAME"
read NAME
echo "MY NAME IS $NAME"
mkdir $NAME
cd $NAME
touch $NAME.cpp

