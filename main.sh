!/bin/bash -bash 
echo"Welcome\n"
command = read -p "Write the command or write 'help'			:"

if [ command -eq "help" ] then 
	echo"List of commands			:\n"
	echo"1			mk  		 \n"
	echo"2			rm 		 \n"
	echo"3			shut up		 \n"
	echo"4			mve		 \n"
	return 0;
if [ command -eq "mk" ] then 
	name_create = read -p "Write the name of file to create!		:"
	mkdir -p name_create
	echo"Created" + name_create + "!"
	return 0;
if [ command -eq "rm" ] then 
	name_delete = read -p "Write the name of file to delete!		:"
	rm -rf name_delete
	echo"Deleted" + name_delete + "!"
	return 0;
if [ command -eq "shut up" ] then 
	echo"Shutdown...."
	return 0;
if [ command -eq "mve" ] then 
	name_move = read -p "Write the name of file to move!			:"
	name_in_move = read -p "Write the name of directory to move the file!		:"
	mv name_move ~/name_in_move
	return 0;
fi
