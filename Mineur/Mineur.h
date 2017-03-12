#pragma once  

#ifdef MINEUR_EXPORTS  
#define MINEUR_API __declspec(dllexport)   
#else  
#define MINEUR_API __declspec(dllimport)   
#endif  
#include <iostream>
#include <string>
#include "Bloc.h"
using namespace std;

class Mineur
	{	
	public:		
		MINEUR_API Bloc creerBloc(TXI txi, string previous_hash);
	private:
		MINEUR_API void chercherNonce();		
};

