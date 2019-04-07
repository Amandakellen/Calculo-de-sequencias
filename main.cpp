#include <iostream>
#include <vector>
#include <stdlib.h>
#include "seq.cpp"

using namespace std;

 int main()
 {
    aux auxiliar;
    int size,x,i,j;
	int op2;
 	int op;
 	seq *p;
 	
 	
	 cout<<"\nDigite a sequencia desejada(ou 0 para sair):"<<endl;
 	cout<<"(1)Fibonacci "<<endl;
	 cout<<"(2)Lucas"<<endl;
	 cout<<"(3)Pell"<<endl;
	 cout<<"(4)Triangular"<<endl;
	 cout<<"(5)Quadrados"<<endl;
	 cout <<"(6)Pentagonal "<<endl;
	 cin>>op;
 	system("clear||cls");
 	
 	while(op!=0)
	 {
	 	
      if(op==1)
	  {
	  	
	  	
		  	p= new fibonacci(3);
	  	
	 
	  }
	  if(op==2)
	  {
	  	p= new lucas(3);
	  	
	  }
	  if (op==3)
	  {
	  	p= new Pell(3);
	  	
	  }
	   if (op==4)
	  {
	  	p= new Triangular(3);
	  	
	  }
	   if (op==5)
	  {
	  	p= new Quadrados(3);
	  	
	  }
	   if (op==6)
	  {
	  	p= new Pentagonal(3);
	  	
	  }
	cout<<"\n Digite a opcao desejada(ou 0 para sair):"<<endl;
	 	cout<<"(1) Gerar o i-enesimo termo da sequencia:"<<endl;
	 	cout<<"(2) Tamanho da sequencia"<<endl;
	 	cout<<"(3)Escrever todos os elementos gerados em os"<<endl;
	 	cout<<"(4)Imprimir i-enesimo termo"<<endl;
	 	cout<<"(5)Imprimir a sequencia de i até j"<<endl;
	 	cout<<"(6)Imprimir vetor de objetos"<<endl;
	 	cin>>op2;
	 	
	 
	 	
	 	do{
			 
			 	switch (op2) {
            case (1):
            	
                  p->elemento();
                  auxiliar.colocat(p);
                  	
			  break;
             case (2):
             
              size=p->length();
              
              cout<<"O tamanho da sequencia e:"<<size<<endl;
              cout<<endl;
			  break;
             case (3):
             
             p->print(cout);
             
			 break;
		    case(4):
		    	
		    	cout<<"Digite o termo que deseja imprimir: "<< endl;
		    	cin>>x;
		    	
		    	p->imprime_termo(x);
   	        break;
   	        
   	        case(5):
   	        	
   	        	cout<<"Digite o inicio da impressao:"<<endl;
   	        	cin>>i;
   	        	cout<<"Digite o fim da impressao"<<endl;
   	        	cin>>j;
   	        	p->imprime1(i,j);
   	        	break;
   	        case(6):
   	        	auxiliar.imprimep();
			    break;
			    }  
        
        cout<<"\n Digite a opcao desejada(ou 0 para sair):"<<endl;
	 	cout<<"(1) Gerar o i-enesimo termo da sequencia:"<<endl;
	 	cout<<"(2) Tamanho da sequencia"<<endl;
	 	cout<<"(3)Escrever todos os elementos gerados em os"<<endl;
	 	cout<<"(4)Imprimir i-enesimo termo"<<endl;
	 	cout<<"(5)Imprimir a sequencia de i até j"<<endl;
	 	cout<<"(6)Imprimir vetor de objetos"<<endl;
	 	cin>>op2;
	 	system("clear||cls");
			 
		 }while(op2!=0);
      cout<<"\nDigite a sequencia desejada(ou 0 para sair):"<<endl;
 	  cout<<"(1)Fibonacci "<<endl;
	  cout<<"(2)Lucas"<<endl;
	  cout<<"(3)Pell"<<endl;
	  cout<<"(4)Triangular"<<endl;
	  cout<<"(5)Quadrados"<<endl;
	  cout <<"(6)Pentagonal "<<endl;
	  cin>>op;
 	  system("clear||cls");
	 }	
	 
}