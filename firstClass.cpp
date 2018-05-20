#include<iostream>
#include<string.h>
class persoana
{
	private:
		int varsta;
	protected:
		float salariu;
	public:
		char nume[20];
		void init(const char *n="Anonim", int v=12, float s=0.)	//char*n="SOmething" works in C and worked in C++ until c++ 3.0, but now should use const
		{
			strncpy(nume, n, sizeof(nume)-1);
			varsta=v;
			salariu=s;
		}
		char* tellNume();
		int tellVarsta()
		{
			return varsta;
		}

};

char* persoana::tellNume()
{
	return nume;
}

int main()
{
	persoana p;
	p.init();
	std::cout<<p.tellVarsta()<<'\n';
	std::cout<<p.tellNume()<<'\n';
	char* string=new char[10];
	std::cout<<sizeof(string)<<'\n';          //8 bytes on 64-bit computers and 4 bytes on 32-bit computers
	strcpy(string,"Anonim fdasf  fasf ");     //Bad idea. You have only 10 bytes allocated. it is not an error, but might overwright memory
	std::cout<<string<<'\n'; 
	strncpy(string,"Anonim fdasf  fasf ",9);  //Better idea, as long as strlcpy is not yet in standard library. It is best to manual add \0 on 10'th position
	std::cout<<string<<'\n';
	char str[4]="nam";			  	
	strcpy(str,"Nam");
	std::cout<<str<<'\n';
	std::cout<<sizeof(str)<<'\n';		  //4 bytes = 4 char * 1 byte
	return 1;
}


