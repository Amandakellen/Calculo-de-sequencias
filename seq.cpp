#include "seq.h"
#include <vector>
#include <iostream>
void aux ::imprimep()
{
	int TaM=SEQ.size();
	unsigned int i;
	for(i=0;i<TaM;i++)
	{
		cout<<endl;
		cout<<*(SEQ[i]);
		
	}
	
}

void aux::imprimep1(int k,int l)
{
	unsigned int i;
	int tama;
	tama=SEQ.size();
     for(i=0;i<tama;i++)
	{
		SEQ[i]->imprime1(k,l);
	}
	
}
void aux::colocat(seq *a)
{
		SEQ.push_back(a);	
}

void seq::imprime1(int ii ,int ifi)
{
		int ct,tamanho;
		tamanho=length();
		if(ifi!=tamanho)
		{
			gen_elems(ifi);
		}
		
			for(ct=ii;ct<=ifi;ct++)
			{
		   cout<<sequencia[ct]<<" ";
	        }	
		

}

 int seq::elem(int i)
{
	return sequencia[i];
}
int seq::length()
{
	return sequencia.size();
} 
void seq::elemento()
{ 
    int elementos;
	cout<<"Digite o numero de elementos que deseja gerar:"<<endl;
	cin>>elementos;
	if(elementos==length() )
	{
		cout<< "Lista ja gerada!"<<endl;
	}
	else{
		gen_elems(elementos);
	}
	
}

void seq ::print(ostream &os)
{
	int i,t;
	t=length();
	for(i=0;i<t;i++)
	{
      os << sequencia[i]<<" " ;
	}

}
ostream& operator<<( ostream &o, seq& s )
{
	s.print(o);
    return o;
	
}

void seq::imprime_termo(int term)
{
		int tama=length();
		if(term!=tama)
		{
			gen_elems(term);
		}
		
		cout<<"O "<<term <<" da sequencia e :"<<sequencia[term]<<endl;
		
}

fibonacci::fibonacci(int n)
 {
 	int tamanho;
 	tamanho=length();
  sequencia.push_back(0);
  sequencia.push_back(1);
  sequencia.push_back(1);
  
  if(n<tamanho)
  {
  	gen_elems(n);
  }
	 
 }
 fibonacci::~fibonacci()
 {
 	int i;
 	 int aux,aux2,soma,contador,tam;
	    tam=length();
	    for(contador=tam;contador<=i;contador++)
		 {	 	
        aux=contador-1;
	 	aux2=contador-2;
	 	soma=sequencia[aux]+sequencia[aux2];
	 	sequencia.push_back(soma);
	 	
		 }
 }
 

 
 lucas::lucas(int l)
 {
   int TAMANHO;
   TAMANHO=length();
  sequencia.push_back(0);
  sequencia.push_back(1);
  sequencia.push_back(3);
  
  
  	gen_elems(l);
  
 }
 
 lucas::~lucas(){}

 
 Pell::Pell(int  P)
 {
 	int TAMAN;
   TAMAN=length();
  sequencia.push_back(0);
  sequencia.push_back(1);
  sequencia.push_back(2);
  
  if(P<TAMAN)
  {
  	gen_elems(P);
  	
  }
 }
 
 Pell::~Pell(){};

 
 Triangular::Triangular(int T)
 {
 	int Tamanho;
   Tamanho=length();
  sequencia.push_back(0);
  sequencia.push_back(1);
  sequencia.push_back(3);
  
  if(T <Tamanho)
  {
  	gen_elems(T);
  }
 }
  Triangular:: ~Triangular(){}
 
 
Quadrados::Quadrados(int Q)
{
   int TamanhO;
   TamanhO=length();
  sequencia.push_back(0);
  sequencia.push_back(1);
  sequencia.push_back(4);
  
  if(Q <TamanhO)
  {
  	gen_elems(Q);
  }
}
Quadrados::~Quadrados(){}


Pentagonal::Pentagonal(int p)
{
	int TAmanhO;
   TAmanhO=length();
  sequencia.push_back(0);
  sequencia.push_back(1);
  sequencia.push_back(5);
  
  if(p <TAmanhO)
  {
  	gen_elems(p);
  }
}

Pentagonal::~Pentagonal(){}

