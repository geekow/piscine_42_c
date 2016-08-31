result=`ifconfig -a | grep "inet " | cut -d " " -f2`
if [ result = "" ]; then
	echo "Je suis perdu!"
else
	ifconfig -a | grep "inet " | cut -d " " -f2
fi
exit 0
