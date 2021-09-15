#! /bin/sh

echo "usage: <program_name> term class_1 class_2 num_weeks"

term="$1"
class_1="$2"
class_2="$3"
num_weeks="$4"

echo "Term", $term
echo "Class 1", $class_1
echo "Class 2", $class_2
echo "Num Weeks", $num_weeks

for num in $(seq 1 $num_weeks)
do
    # Create Week Folder
    mkdir week_"$num"

    # Create Term Folder
    mkdir week_"$num"/"$term"
    
    # Create Class 1 Folder
    mkdir week_"$num"/"$term"/"$class_1"
    touch week_"$num"/"$term"/"$class_1"/.keep
    
    # Create Class 2 Folder
    mkdir week_"$num"/"$term"/"$class_2"
    touch week_"$num"/"$term"/"$class_2"/.keep

done
