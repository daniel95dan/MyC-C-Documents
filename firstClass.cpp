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
		void init(const char *n="Anonim", int v=12, float s=0.)
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
	std::cout<<sizeof(string)<<'\n';
	strncpy(string,"Anonim fdasf  fasf ",9);
	std::cout<<string<<'\n';
	char str[4]="nam";
	strcpy(str,"Nam");
	std::cout<<str<<'\n';
	std::cout<<sizeof(str)<<'\n';
	return 0;
}


