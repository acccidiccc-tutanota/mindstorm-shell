
#include <iostream>
#include <string>


#define PM1 = 1
#define PM2 = 2
#define PM3 = 3
#define PM4 = 4
void help();
void hebelsteuerung(int speed, int turns);
void info();
void shell() {
	//leistung 20 15 centimeter
	
	std::cout << "shell # ";

	while (true) {
		std::string input;
		std::getline(std::cin, input);
		if (input == "reichweite") {
			hebelsteuerung(0, 0);
		}
		if  (input == "info") {
			info();	
		}
		
	}
}
void info() {
	std::cout << R"(
	robot: 22 cm lange, 17 breite
	start-satellit: strecke bis satellit 45 (3.2 Umdrehungen) , dann links drehen und12cm weiter.
	motor: rechts = d, links = a	
	
	
	)";	
	
	
}
void hebelsteuerung(int speed, int turns) {
	int choice;
	int i;
	go:
	std::cout << "meter <1> oder umdrehungen<2>\n";
	std::cin >> i;
	switch (i)  {
	    case 1:
	    std::cout << "umdrehungen, für beenden eine negative zahle eingeben:\n";
	    
	    
    	std::cin >> turns;
    	if (turns < 0) {
    		shell();
    	}
    	
	    std::cout << 14 * turns << " cm\n";
	    shell();
	    break;
	    case 2:
	    float meter;
	    std::cout << "wie viele meter willst du erreichen:\n";
	    std::cin >> meter;
	    std::cout << meter / 14 << "umdrehungen\n";
	    break;
	    default:
	    std::cout << "invalide eingabe\n";
	    goto go;
	    
	}
	
}
void help() {

	std::cout << "reichweite\nhelp\n";
}

int main() {
	
	shell();






	return 0;



}


