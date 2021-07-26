//nhap do ph roi danh gia


#include <iostream>

	int main() {
	
		double ph=0;
		//khai bao do ph
		
		std::cin >> ph;
		//nhap do ph
		
		if (ph==7) 
			{
			std::cout << "binh thuong";
			}
				 else if (ph>7)
				 	{ std::cout << "rat cao";
					 }
					 else
					 	{ std::cout << "thap";
						 }
			
	return 0;
	
	
	}
