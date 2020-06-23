/*

*/
#include <iostream>

using namespace std;


class seres {
	
	string s1, s2 ,s3;
	
	public:
	seres();
	seres (string s1, string s2, string s3) {
				
		this -> s1 = s1;
		this -> s2 = s2;
		this -> s3 = s3;		
	}
	
	string compare(){
		string result;
		
		if (s1 == "vertebrado"){
			if(s2 == "ave"){
				if(s3 == "carnivoro"){
				 result = "aguia";	
				}else if(s3 =="onivoro"){
				 result = "pomba";
				}							
			}else if(s2 == "mamifero"){
				if(s3=="onivoro"){
					result= "homem";
				}else if (s3=="herbivoro"){
					result = "vaca";
				}
			}											
		}else if(s1=="invertebrado"){
			if(s2=="inseto"){
				if(s3=="hematofago"){
					result = "pulga";
				}else if(s3=="herbivoro"){
					result = "lagarta";
				}				
			}else if(s2=="anelideo"){
				if(s3=="hematofago"){
					result = "sanguessuga";
				}else if(s3=="onivoro"){
					result = "minhoca";
				}
			}
		}
		
		
		return result;
	}	
	
};


int main()
{
	string s1 , s2 ,s3;
	 cin >> s1;
	 cin >> s2;
	 cin >> s3;
	seres *s = new seres(s1,s2,s3);
	cout << s->compare()<< endl;
	
	return 0;
}