#include <stdio.h>
#include <conio.h>

struct nodoarbol{
	
	struct nodoarbol*ptrizq;
	int dato;
	struct nodoarbol*prtder;
};

typedef nodoarbol*ptrnodoarbol;

void insertanodo(ptrnodoarbol&ptrarbol,int valor);

void inorden(ptrnodoarbol ptrarbol);
void preoden(ptrnodoarbol ptrarbol);
void postorden(ptrnodoarbol ptrarbol);


int main(){
	
	
	ptrnodoarbol ptrraiz=NULL;
	
insertanodo(ptrraiz, 6); 
insertanodo(ptrraiz, 10); 
insertanodo(ptrraiz, 4); 
insertanodo(ptrraiz, 5); 
insertanodo(ptrraiz, 9); 
insertanodo(ptrraiz, 14); 
	
	
	
	
	return 0;
}

void insertanodo(ptrnodoarbol*ptrarbol,int valor){
	
	if (ptrarbol==NULL){
		nodoarbol*ptrarbol=new nodoarbol();
		ptrarbol->dato=valor;
		ptrarbol)->ptrizq=NULL;
		ptrarbol)->ptrDer=NULL;
	}else{
		if(valor<ptrarbol*dato){
			insertanodo(ptrarbol*ptrizq,valor);
		}else if(valor>ptrarbol*dato){
			insertanodo(ptrarbol*prtder,valor);
			
		}else{
			cout<<"Valor duplicado");
		}
	}
return;
}

void inorden(ptrnodoarbol ptrarbol){
	if(ptrarbol!=NULL){
		inorden(ptrarbol->ptrizq);
		cout<<"ptrarbol->dato";
		inorden(ptrarbol->prtder);
		
	}
return;
}

void preorden(ptrnodoarbol ptrarbol){
	if(ptrarbol !=NULL){
		cout<<"ptrarbol->dato";
		preorden(ptrarbol->ptrizq);
		preorden(ptrarbol->prtder);
		
	}
return;
}
