#include<iostream>

using namespace std;

int main()
{
	string 	weapon_primary;
	string	weapon_secondary;
	string	weapon_special;
	string 	chiv_class;

	srand(time(NULL));

	int rands = rand()%4+1;

	if(rands == 1) {
		chiv_class = "Knight";
	} else if(rands == 2) {
		chiv_class = "Archer";
	} else if(rands == 3) {
		chiv_class = "Vanguard";
	} else if(rands == 4) {
		chiv_class = "Man At Arms";
	} else {
		cout<<"ERROR: FAILED TO RANDOMIZE CLASS"<<endl;
		return 1;
	}
	
	if(chiv_class == "Knight") {
		int i = 1;
		rands = rand()%11+1;
		if(rands == i++) {
			weapon_primary = "Longsword";
		} else if(rands == i++) {
			weapon_primary = "Sword of War";
		} else if(rands == i++) {
			weapon_primary = "Messer";
		} else if(rands == i++) {
			weapon_primary = "Double Axe";
		} else if(rands == i++) {
			weapon_primary = "Pole Axe";
		} else if(rands == i++) {
			weapon_primary = "Bearded Axe";
		} else if(rands == i++) {
			weapon_primary = "Warhammer";
		} else if(rands == i++) {
			weapon_primary = "Maul";
		} else if(rands == i++) {
			weapon_primary = "Grand Mace";
		} else if(rands == i++) {
			weapon_primary = "Flail";
		} else if(rands == i++) {
			weapon_primary = "Heavy Flail";
		} else {
			cout<<"ERROR: FAILED TO RANDOMIZE PRIMARY WEAPON"<<endl;
			return 1;
		}
		
		i = 1;
		rands = rand()%6+1;
		if(rands == i++) {
			weapon_secondary = "Broadsword";
		} else if(rands = i++) {
			weapon_secondary = "Falchion";
		} else if(rands = i++) {
			weapon_secondary = "Norse Sword";
		} else if(rands = i++) {
			weapon_secondary = "Mace";
		} else if(rands = i++) {
			weapon_secondary = "Morning Star";
		} else if(rands = i++) {
			weapon_secondary = "Holy Water Sprinkler";
		} else {
			cout<<"ERROR: FAILED TO RANDOMIZE SECONDARY WEAPON"<<endl;
		}

		i = 1;
		rands = rand()%4+1;
		if(rands == i++) {
		weapon_special = "Kite Shield";
		} else if(rands == i++) {
			weapon_special = "Tower Shield";
		} else if(rands == i++) {
			weapon_special = "Throwing Axe";
		} else if(rands == i++) {
			weapon_special = "Buckler";
		} else {
			cout<<"ERROR: FAILED TO RANDOMIZE SPECIAL WEAPON"<<endl;
		}
	} else if(chiv_class == "Archer") {
		int i = 1;
		rands = rand()%10+1;
		if(rands == i++) {
			weapon_primary = "Longbow";
		} else if(rands == i++) {
			weapon_primary = "Shortbow";
		} else if(rands == i++) {
			weapon_primary = "Warbow";
		} else if(rands == i++) {
			weapon_primary = "Crossbow";
		} else if(rands == i++) {
			weapon_primary = "Light Crossbow";
		} else if(rands == i++) {
			weapon_primary = "Heavy Crossbow";
		} else if(rands == i++) {
			weapon_primary = "Javelin";
		} else if(rands == i++) {
			weapon_primary = "Short Spears";
		} else if(rands == i++) {
			weapon_primary = "Heavy Javelin";
		} else if(rands == i++) {
			weapon_primary = "Sling";
		} else {
			cout<<"ERROR: FAILED TO RANDOMIZE PRIMARY WEAPON"<<endl;
		}

		i = 1;
		rands = rand()%6+1;
		if(rands == i++) {
			weapon_secondary = "Broad Dagger";
		} else if(rands == i++) {
			weapon_secondary = "Hunting Knife";
		} else if(rands == i++) {
			weapon_secondary = "Thrusting Dagger";
		} else if(rands == i++) {
			weapon_secondary = "Shortsword";
		} else if(rands == i++) {
			weapon_secondary = "Saber";
		} else if(rands == i++) {
			weapon_secondary = "Cudgel";
		} else {
			cout<<"ERROR: FAILED TO RANDOMIZE SECONDARY WEAPON"<<endl;
		}

		if(weapon_primary == "Longbow" || weapon_primary == "Shortbow" || weapon_primary == "Warbow") {
			i = 1;
			rands = rand()%3+1;
			if(rands == i++) {
				weapon_special = "Broadhead Arrow";
			} else if(rands == i++) {
				weapon_special = "Bodkin Arrow";
			} else if(rands == i++) {
				weapon_special = "Fire Arrow";
			}
		} else if(weapon_primary == "Crossbow" || weapon_primary == "Light Crossbow" || weapon_primary == "Heavy Crossbow") {
			i 		= 1;
			rands 	= rand()%2+1;
			if(rands == i++) {
				weapon_special = "Pavise Shield";
			} else if(rands == i++) {
				weapon_special = "Extra Ammo";
			}
		} else if(weapon_primary == "Javelin" || weapon_primary == "Short Spears" || weapon_primary == "Heavy Javelin") {
			weapon_special = "Buckler Shield";
		} else if(weapon_primary == "Sling") {
			i 		= 1;
			rands 	= rand()%2+1;
			if(rands == i++) {
				weapon_special = "Stones";
			} else if(rands == i++) {
				weapon_special = "Lead Ball";
			}
		}
	} else if(chiv_class == "Vanguard") {
		int i = 1;
		rands = rand()%10+1;
		if(rands == i++) {
			weapon_primary = "Greatsword";
		} else if(rands == i++) {
			weapon_primary = "Claymore";
		} else if(rands == i++) {
			weapon_primary = "Zweihander";
		} else if(rands == i++) {
			weapon_primary = "Thrusting Spear";
		} else if(rands == i++) {
			weapon_primary = "Fork";
		} else if(rands == i++) {
			weapon_primary = "Brandistock";
		} else if(rands == i++) {
			weapon_primary = "Bardiche";
		} else if(rands == i++) {
			weapon_primary = "Billhook";
		} else if(rands == i++) {
			weapon_primary = "Halberd";
		} else if(rands == i++) {
			weapon_primary = "Pole Hammer";
		}

		i = 1;
		rands = rand()%6+1;
		if(rands == i++) {
			weapon_secondary = "Shortsword";
		} else if(rands == i++) {
			weapon_secondary = "Saber";
		} else if(rands == i++) {
			weapon_secondary = "Cudgel";
		} else if(rands == i++) {
			weapon_secondary = "War Axe";
		} else if(rands == i++) {
			weapon_secondary = "Hatchet";
		} else if(rands == i++) {
			weapon_secondary = "Dane Axe";
		}

		i = 1;
		rands = rand()%3+1;
		if(rands == i++) {
			weapon_special = "Smoke Pot";
		} else if(rands == i++) {
			weapon_special = "Throwing Knife";
		} else if(rands == i++) {
			weapon_special = "Throwing Axe";
		}
	} else if(chiv_class == "Man At Arms") {	
		int i = 1;
		rands = rand()%10+1;
		if(rands == i++) {
			weapon_primary = "Broadsword";
		} else if(rands == i++) {
			weapon_primary = "Norse Sword";
		} else if(rands == i++) {
			weapon_primary = "Falchion";
		} else if(rands == i++) {
			weapon_primary = "Hatchet";
		} else if(rands == i++) {
			weapon_primary = "War Axe";
		} else if(rands == i++) {
			weapon_primary = "Dane Axe";
		} else if(rands == i++) {
			weapon_primary = "Flanged Mace";
		} else if(rands == i++) {
			weapon_primary = "Morning Star";
		} else if(rands == i++) {
			weapon_primary = "Holy Water Sprinkler";
		} else if(rands == i++) {
			weapon_primary = "Quarterstaff";
		}

		i = 1;
		rands = rand()%6+1;
		if(rands == i++) {
			weapon_secondary = "Broad Dagger";
		} else if(rands == i++) {
			weapon_secondary = "Hunting Knife";
		} else if(rands == i++) {
			weapon_secondary = "Thrusting Dagger";
		} else if(rands == i++) {
			weapon_secondary = "Shortsword";
		} else if(rands == i++) {
			weapon_secondary = "Saber";
		} else if(rands == i++) {
			weapon_secondary = "Cudgel";
		}

		i = 1;
		rands = rand()%4+1;
		if(rands == i++) {
			weapon_special = "Throwing Knife";
		} else if(rands == i++) {
			weapon_special = "Oil Pot";
		} else if(rands == i++) {
			weapon_special = "Heater Shield";
		} else if(rands == i++) {
			weapon_special = "Buckler Shield";
		}
	}
	

	cout<<"Class:     "<<chiv_class<<endl;
	cout<<"Primary:   "<<weapon_primary<<endl;
	cout<<"Secondary: "<<weapon_secondary<<endl;
	cout<<"Special:   "<<weapon_special<<endl;
}
