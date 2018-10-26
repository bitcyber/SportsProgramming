#!/usr/local/bin/zsh
cd ./github/competitiveProgrammingSolutions
# read -p "Enter Name: " prob;
# echo "Creating $prob :";
# printf "Create Folder:";
# mkdir $prob;
# printf ".... done\n";
# printf "Enter Folder:";
# cd ./$prob;
# printf ".... done\n";
# printf "Create README.md:";
# touch README.md;
read probname;
probname="$probname.cpp"
# printf ".... done\n";
printf "Creating $probname ...";
touch $probname
dt=$(date '+%H:%M:%S %d/%m/%Y ');
# echo "$dt"
echo "/*\n Time & Date of creation $dt \n Copyright © amit2rockon. All rights reserved. \n*/" >> $probname

cat function.cpp >> $probname
printf "done! \n opening \n $probname";

open $probname
printf "\n"
# printf "Coping headerfiles ";
# cp ../../run.sh  ../$probname;
# printf ".... done\n";


#git status
#git add .
#git commit -m " added $probname"
#git push

