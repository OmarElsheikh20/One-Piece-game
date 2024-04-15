#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct character
{
	char name[60];
	int age;
	string haki;
	string weapon;
	string race;
	string devil_fruit;
	string job;
};
struct crew
{
	character crw[3];
	string ship;
};

string get_haki();
string get_devil_fruit();
string get_race();
string get_job(int chosse);
string get_sword();
void main()
{
	character characters[40] = {};
	cout << "Chosse what you want to do?\n1.Create one character \n2.Create a crew \n ";
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter your character's name : ";
		cin >> characters[0].name;
		cout << "Enter your character's age :";
		cin >> characters[0].age;
		characters[0].race = get_race();
		characters[0].haki = get_haki();
		characters[0].devil_fruit = get_devil_fruit();
		cout << "Want to use a sword? (y/n)\n";
		char s;
		cin >> s;
		switch (s)
		{
		case 'y':
		case 'Y':
			characters[0].weapon = get_sword();
			break;
		case 'n':
		case'N':
			characters[0].weapon = "No sword";
			break;
		default:
			break;
		}
		cout << "**************************************\n";
		cout << "Your name :" << characters[0].name <<endl;
		cout << "Your age :" << characters[0].age <<endl;
		cout << "Your race :" << characters[0].race <<endl;
		cout << "Your sword :" << characters[0].weapon << endl;
		cout << "Your haki :" << characters[0].haki << endl;
		cout << "Your devil fruit :" << characters[0].devil_fruit << endl;
		cout << "*****************************************" << endl;
	}
	else if (choice == 2)
	{
		crew my;
		string crew_name;
		cout << "Enter Your crew's name :";
		cin >> crew_name;
		for (int i = 0; i < 3; i++) {
			
			cout << "Enter your character's name : ";
			cin >> my.crw[i].name;
			cout << "Enter your character's age :";
			cin >> my.crw[i].age;
			my.crw[i].race = get_race();
			my.crw[i].haki = get_haki();
			my.crw[i].devil_fruit = get_devil_fruit();
			cout << "Want to use a sword? (y/n)\n";
			char s;
			cin >> s;
			switch (s)
			{
			case 'y':
			case 'Y':
				my.crw[i].weapon = get_sword();
				break;
			case 'n':
			case'N':
				my.crw[i].weapon = "No sword";
				break;
			default:
				break;
			}
			cout << "Chosse your job in the crew :\n1.Captian \n2.Swordsman\n3.Cock\n4.Navigator\n5.Fighter\n6.Doctor\n7.Sniper\n";
			int joob;
			cin >> joob;
			my.crw[i].job = get_job(joob);
			

		}
		cout << "Enter Your ship's name: ";
		cin >> my.ship;
		
		for (int u = 0; u < 3; u++) {
			cout << "**********************************************************************\n";
			cout << "Your "<<u<<" Character's name : " << my.crw[u].name << endl;
			cout << "Your " << u << " Character's age : " << my.crw[u].age << endl;
			cout << "Your " << u << " Character's race : " << my.crw[u].race << endl;
			cout << "Your " << u << " Character's sword : " << my.crw[u].weapon << endl;
			cout << "Your " << u << " Character's haki : " << my.crw[u].haki << endl;			
			cout << "Your " << u << " Character's devil fruit : " << my.crw[u].devil_fruit << endl;
			cout << "Your " << u << " Character's job : " << my.crw[u].job << endl;
			cout << "**********************************************************************\n";
		}
		cout << "Your ship's name: " << my.ship;
	}

	
}//END MAIN

string get_haki()
{
	string haki;
	srand(time(NULL));
	int fe = rand() % 2;
	if (fe == 0) {
		haki = "No haki";
		return haki;
	}
	else if (fe == 1)
	{
		int what = rand() % 14;
		switch (what)
		{
		 case 0:
		 case 1:
		 case 2:
			 haki = "Aramament haki ";
			 return haki;
			 break;
		 case 3:
		 case 4:
		 case 5:
			 haki = "Observation haki ";
			 return haki;
			 break;
		 case 6:
		 case 7:
		 case 8:
			 haki = "Aramament & Observation haki ";
			 return haki;
			 break;
		 case 9:
		 case 10:
			 haki = "Aramament & Conqerer's haki ";
			 return haki;
			 break;
		 case 11:
		 case 12:
			 haki = "Observation & Conqerer's haki ";
			 return haki;
			 break;
		 case 13:
			 haki = "Aramament & Observation & Conqerer's haki ";
			 return haki;
			 break;
		 default:
			break;
		}

	}
}//END HAKI
string get_devil_fruit()
{
	string fruit;
	srand(time(NULL));
	int fe = rand() % 3;
	if (fe == 0) {
		fruit = "No Devil fruit ";
		return fruit;
	}
	else if (fe == 1 || fe == 2)
	{
		int what = rand() % 30;
		switch (what)
		{
		case 0:
			fruit = "Gomu Gomu no mi";
			return fruit;
			break;
		case 1:
			fruit = "Mera Mera no mi";
			return fruit;
			break;
		case 2:
			fruit = "Ope Ope no mi";
			return fruit;
			break;
		case 3:
			fruit = "Magu Magu no mi";
			return fruit;
			break;
		case 4:
			fruit = "Uo Uo no mi";
			return fruit;
			break;
		case 5:
			fruit = "Jiki Jiki no mi";
			return fruit;
			break;
		case 6:
			fruit = "Bara Bara no mi";
			return fruit;
			break;
		case 7:
			fruit = "Pika Pika no mi";
			return fruit;
			break;
		case 8:
			fruit = "Goro Goro no mi";
			return fruit;
			break;
		case 9:
			fruit = "Gura Gura no mi";
			return fruit;
			break;
		case 10:
			fruit = "Ito Ito no mi";
			return fruit;
			break;
		case 11:
			fruit = "Kage Kage no mi";
			return fruit;
			break;
		case 12:
			fruit = "Hito Hito no mi";
			return fruit;
			break;
		case 13:
			fruit = "Suna Suna no mi";
			return fruit;
			break;
		case 14:
			fruit = "Hie Hie no mi";
			return fruit;
			break;
		case 15:
			fruit = "Yami Yami no mi";
			return fruit;
			break;
		case 16:
			fruit = "Hana Hana no mi";
			return fruit;
			break;
		case 17:
			fruit = "Yomi Yomi no mi";
			return fruit;
			break;
		case 18:
			fruit = "Bero Bero no mi";
			return fruit;
			break;
		case 19:
			fruit = "Suke Suke no mi";
			return fruit;
			break;
		case 20:
			fruit = "Smile fruit";
			return fruit;
			break;
		case 21:
			fruit = "Nikyu Nikyu no mi";
			return fruit;
			break;
		case 22:
			fruit = "Yuki Yuki no mi";
			return fruit;
			break;
		case 23:
			fruit = "Zushi Zushi no mi";
			return fruit;
			break;
		case 24:
			fruit = "Mochi Mochi no mi";
			return fruit;
			break;
		case 25:
			fruit = "Mero Mero no mi";
			return fruit;
			break;
		case 26:
			fruit = "Tori Tori no mi";
			return fruit;
			break;
		case 27:
			fruit = "Doko Doko no mi";
			return fruit;
			break;
		case 28:
			fruit = "Soul Soul no mi";
			return fruit;
			break;
		case 29:
			fruit = "Bari Bari no mi";
			return fruit;
			break;
		default:
			break;
		}
	}
}
string get_race()
{
	string race;
	srand(time(NULL));
	int what = rand() % 14;
	switch (what)
	{
	case 0:
		race = "Human";
	    return race;
		break;
	case 1:
		race = "Mink";
		return race;
		break;
	case 2:
		race = "Cyborg";
		return race;
		break;
	case 3 :
		race = "Fishman";
		return race;
		break;
	case 4:
		race = "Buccaneer";
		return race;
		break;
	case 5:
		race = "Lulu";
		return race;
		break;
	case 6:
		race = "Tontata";
		return race;
		break;
	case 7:
		race = "Giant";
		return race;
		break;
	case 8:
		race = "Ozz";
		return race;
		break;
	case 9:
		race = "3 Eyed";
		return race;
		break;
	case 10:
		race = "Long arms";
		return race;
		break;
	case 11:
		race = "Long legs";
		return race;
		break;
	case 12:
		race = "Skypian";
		return race;
		break;
	case 13:
		race = "Gohul";
		return race;
		break;
	default:
		break;
	}


}
string get_job(int chosse)
{
	
	string what;
	switch (chosse)
	{
	case 1:
		what = "Captin";
		return what;
		break;
	case 2:
		what = "Swordsman";
		return what;
		break;
	case 3:
		what = "Cock";
		return what;
		break;
	case 4:
		what = "Navigator";
		return what;
		break;
	case 5:
		what = "Fighter";
		return what;
		break;
	case 6:
		what = "Doctor";
		return what;
		break;
	case 7:
		what = "Sniper";
		return what;
		break;
	default:
		break;
	}

}
string get_sword()
{
	string wha;
	int what = rand() % 7;
	switch (what)
	{
	case 0:
		wha = "One-Sword-Style:'Oado Ichimogi' ";
		return wha;
		break;
	case 1:
		wha = "Two-Sword-Style:'Oado Ichimogi & Sandai Kititsu' ";
		return wha;
		break;
	case 2:
		wha = "One-Sword-Style:'Yoru' ";
		return wha;
		break;
	case 3:
		wha = "One-Sword-Style:'Shusi' ";
		return wha;
		break;
	case 4:
		wha = "One-Sword-Style:'Raiu' ";
		return wha;
		break;
	case 5:
		wha = "Three-Sword-Style:'Oado Ichimogi & Sandai Kititsu & Enma' ";
		return wha;
		break;
	case 6:
		wha = "Two-Sword-Style:'Oden' ";
		return wha;
		break;
	default:
		break;
	}
}