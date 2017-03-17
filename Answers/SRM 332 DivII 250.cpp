#include <bits/stdc++.h>
using namespace std;
class TextStatistics{
public :
double averageLength(string text) {
double cnt=1;
int x=0;
	for (int i=0;i<text.length();++i){
		if ((text[i]==' ' || ispunct(text[i]) || isdigit(text[i]))&& x==0){
						text.erase(i,1);
									i-=1;
									continue;

					}
					else
						x=1;
		if (text[i]==' '){
			if(text[i+1]==' '|| ispunct(text[i+1]) || isdigit(text[i+1]) ){
				text.erase(i,1);
				i-=1;
			}
			else if(i==text.length()-1)
				text.erase(i,1);
			else{
			text.erase(i,1);
			i-=1;
			cnt++;
			}

		}
		if (ispunct(text[i])){
					if(text[i+1]==' '|| ispunct(text[i+1]) || isdigit(text[i+1]) ){
						text.erase(i,1);
						i-=1;
					}
					else if(i==text.length()-1)
						text.erase(i,1);
					else{
					text.erase(i,1);
					i-=1;
					cnt++;
					}

				}
		if (isdigit(text[i])){
							if(text[i+1]==' '|| ispunct(text[i+1]) || isdigit(text[i+1]) ){
								text.erase(i,1);
								i-=1;
							}
							else if(i==text.length()-1)
								text.erase(i,1);
							else{
							text.erase(i,1);
							i-=1;
							cnt++;
							}

						}

	}
	return text.length()/cnt;

}

};
