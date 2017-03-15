// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int main()
{
	const int HASH_SIZE = 10;
	char hash[HASH_SIZE] = "aaaaaaaaa";
	try
	{
		Bloc b = creerBloc(NULL, hash);
	}				
	catch (string e)
	{
		if (e.compare("Error : Transaction is null")!=0)cout << "pas ok Error : Transaction is null" <<endl;
	}	
	try
	{
		Bloc b = creerBloc(NULL, "eee");
	}
	catch (string e)
	{
		if (e.compare("Error : Previous_Hash is null") != 0)cout << "pas ok Error : Previous_Hash is null" << endl;
	}
	try
	{
		Bloc b = creerBloc(NULL, "eee");
	}
	catch (string e)
	{
		if (e.compare("Error : Previous_Hash is incomplete") != 0)cout << "pas ok Error : Previous_Hash is incomplete" << endl;
	}
	TXI txi[4];
	txi[0] = new TXI();
	txi[0].nBloc = 1;
	txi[0].nUtxo = 1;
	txi[0].signature = "ahahahahah";

	txi[1] = new TXI();
	txi[1].nBloc = 1;
	txi[1].nTx = 1;
	txi[1].nUtxo = 1;
	txi[1].signature = "ahahahahah";

	txi[2] = new TXI();
	txi[2].nBloc = 1;
	txi[2].nTx = 1;
	txi[2].nUtxo = 1;
	txi[2].signature = "ahahahahah";

	txi[3] = new TXI();
	txi[3].nBloc = 1;
	txi[3].nTx = 1;
	txi[3].nUtxo = 1;
	
	
	TX tx = new TX();
	tx.txi = txi;
	try
	{
		Bloc b = creerBloc(TX, "EEEEEEEEEE");
	}
	catch (string e)
	{
		if (e.compare("Error : Transaction input is missing values") != 0)cout << "Error : Transaction input is missing values" << endl;
	}
}
