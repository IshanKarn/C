#include<stdio.h>

#include"authentication.c"
#include"data.c"
#include"coin.c"
#include"player.c"

int main()
{	
	// Register/Login
	printf("\t\t\tWELCOME");
	if (registered();)
		getCredentials(request="login");
		login(username, password);
	else
		getCredentials(request="register");
		register(username, password);
		clrscr();
		login(request="login");
		
	// Purchase coins
	coins = getBalance(username);
	if (coins < 200)
		purchaseCoin();
	
	// Play game
	luckyNumber = getLuckyNumber()
	magicNumber = getMagicNumber()
	if (luckyNumber == magicNumber)
		increaseBalance();
	else
		decreaseBalance();
	
	// Result
	// //getResult();
	balance = getBalance()
	if (balance > 600)
		//win
	else if (balance == 0)
		//loss
		
	return 0;
}