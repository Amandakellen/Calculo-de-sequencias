#ifndef SEQ_H
#define SEQ_H
#include <vector>
#include <iostream>
#include<stdlib.h>

//https://stackoverflow.com/questions/27770050/using-stdostream-as-argument-to-a-print-function
//https://www.hardware.com.br/comunidade/sobrecarga-operadores/1150421/
//http://www.dca.fee.unicamp.br/cursos/POOCPP/node58.html
//https://pt.cppreference.com/w/cpp/container/vector
//https://msdn.microsoft.com/pt-br/library/9xd04bzs.aspx
//http://sweet.ua.pt/joao.p.silva/stl.html
//https://msdn.microsoft.com/pt-br/library/9xd04bzs.aspx
//http://www.guj.com.br/t/resolvido-objetos-em-c/281718/9




//https://stackoverflow.com/questions/27770050/using-stdostream-as-argument-to-a-print-function
//https://www.hardware.com.br/comunidade/sobrecarga-operadores/1150421/
//http://www.dca.fee.unicamp.br/cursos/POOCPP/node58.html
//https://pt.cppreference.com/w/cpp/container/vector
//https://msdn.microsoft.com/pt-br/library/9xd04bzs.aspx
//http://sweet.ua.pt/joao.p.silva/stl.html
//https://msdn.microsoft.com/pt-br/library/9xd04bzs.aspx
//http://www.cplusplus.com/reference/vector/vector/emplace_back/
//https://pt.stackoverflow.com/questions/120231/como-usar-o-vector-para-armazenar-uma-classe
//https://stackoverflow.com/questions/35689763/how-do-you-make-a-vector-of-class-objects

using namespace std;

class seq
{
     
	
	protected:
    virtual void gen_elems(int )=0 ;// Gera os elementos da série até o iésimo elemento (protected)
    
    
     public:
     	  vector <unsigned long int>  sequencia; 
     	 int length() ;// Retorna o tamanho atual da série
     	 void print(ostream &os); // Escreve todos os elementos gerados em os (public)
  	 int elem(int ); // Retorna o iésimo elemento da seqüência (public)
  	 	void imprime1(int ,int);//Imprime sequencia de i até j
  	 	void elemento();
  	 	void imprime_termo(int );
  	 	 friend ostream & operator<<(ostream &,seq &);
		   
        
  	 	 
     	 
};


class aux{
public:
  vector<seq *> SEQ;
  void colocat(seq *);
  void imprimep1(int ,int );
  void imprimep();
};


class fibonacci :public seq 
{
	
     	public:
		fibonacci(int );
		~fibonacci();
			 void gen_elems(int i)
 {
 		 int aux,aux2,soma,contador,tam;
	    tam=length();
	    for(contador=tam;contador<=i;contador++)
		 {	 	
        aux=(contador-1);
	 	aux2=contador-2;
	 	soma=sequencia[aux]+sequencia[aux2];
	 	sequencia.push_back(soma);
		 }
 }

  
};


class lucas:public seq 
{ 
   
	public:
	lucas(int );
	~lucas();
	 void gen_elems(int i)
 {
 		 int aux,aux2,soma,contador,tam;
	    tam=length();
	    for(contador=tam;contador<=i;contador++)
		 {	 	
        aux=(contador-1);
	 	aux2=contador-2;
	 	soma=sequencia[aux]+sequencia[aux2];
	 	sequencia.push_back(soma);
		 }
 }

     	
};


class Pell: public seq  
 {
   
 	public:
 	Pell(int );
 	~Pell();
 	 void gen_elems(int i)
 {
 		 int aux,aux2,soma,contador,tam;
	    tam=length();
	    for(contador=tam;contador<=i;contador++)
		 {	 	
        aux=(contador-1);
	 	aux2=contador-2;
	 	soma=(2*sequencia[aux])+sequencia[aux2];
	 	sequencia.push_back(soma);
		 }
 }
 
 };
 

 class Triangular:public seq 
{
	 
	public:
	Triangular(int);
	~Triangular();
	void  gen_elems(int i)
 {
 	int aux,aux2,soma,contador,tam;
	    tam=length();
	    for(contador=tam;contador<=i;contador++)
		 {	 	
        aux=(contador-1);
	 	aux2=contador;
	 	soma=sequencia[aux]+aux2;
	 	sequencia.push_back(soma);
		 }
 }

};



 class Quadrados:public seq  
 {
 	
 	public:
 	Quadrados(int);
 	~Quadrados();
 	void gen_elems(int i)
{
	 int aux,soma,contador,tam;
	    tam=length();
	    for(contador=tam;contador<=i;contador++)
		 {	 
		 		
        aux=contador;
        
	 	soma=aux*aux;
	 	
	 	sequencia.push_back(soma);
		 }
}
 	
 };
 

 class Pentagonal:public seq  
{
	
	public:
	Pentagonal(int );
	~Pentagonal();
	 void  gen_elems(int i)
 	{
	 	 int aux,aux2,soma,contador,tam;
	    tam=length();
	    for(contador=tam;contador<=i;contador++)
		 {	 
		 		
        aux=contador-1;
    
	 	aux2=(3*contador)+2;
	 	
	 	soma=(aux*aux2);
	 	soma =soma/2;
	 	soma=soma+1;
	 
	 	sequencia.push_back(soma);
		 }
		 
    }
	
};





#endif 