#pragma once  

#ifdef MINEUR_EXPORTS  
#define MINEUR_API __declspec(dllexport)   
#else  
#define MINEUR_API __declspec(dllimport)   
#endif  
#include <iostream>
#include <string>



class Mineur
	{	
	public:		
		Mineur();
		MINEUR_API void lancer();
		//tant que vrai
		// attendre arriv�e d'une transaction
		//gererTransaction()	
		
		 MINEUR_API void gererTransaction();
		 //ajoute la transcation � une liste de transactions
		 //si la taille liste de transactions == taille bloc alors
			//chercherNonce()		 
			//publier bloc	
		//fin si			
		
		 MINEUR_API void chercherNonce();
		 // essayer tous les nonces possibles jusqu'� trouver le bon en utilisant la fonction de hashage du composant Hasheur
		 // publier le bloc
		 // 
		 MINEUR_API void publierBloc();		 
		 //envoyer le bloc � tous les noeuds 
};

