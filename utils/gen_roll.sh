#! /bin/bash

echo "Please enter the 1511 class in the format dayXX[ab]"
read class
echo "Processing... This may take a moment..."

mlalias cs1511.$class | sed s/" "//g | grep "^z" > $class.emails

echo "" > $class.zids
echo "" > $class.names

for email in `cat $class.emails`
do
	zid=`echo $email | sed s/"@unsw.edu.au"//g` 
	echo $zid >> $class.zids
	name=`acc $zid | grep "[^User] Name : " | sed s/"Name : "//g`
	echo $name >> $class.names
done

