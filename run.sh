#!/bin/bash
mkdir facts
mkdir reports

for f in ../factRuEval-2016/devset/*.txt; 
do 
  name=`echo $f | grep -E -o "book_[0-9]+"`;
  cat $f | /opt/tomita/tomita-parser/build/bin/tomita-parser config.proto > facts/$name.proto ;
done

for f in facts/*.proto; 
do
  name=`echo $f | grep -E -o "book_[0-9]+"`;
  python scripts/parsefacts.py $f > facts/$name.task1 ;
done

rm reports/*
python3 ../factRuEval-2016/scripts/t1_eval.py -s ../factRuEval-2016/devset/ -t facts/ -o reports/ -l
