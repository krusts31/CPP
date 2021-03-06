#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"	
#include <iostream>
#include <stdlib.h> 
#include <time.h> 

int	main()
{
	srand(time(0));
//testing varibles
	FragTrap FR4GTP;
	std::cout << "Testing FragTrap varibles" << std::endl;
	std::cout << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "curent hp "<< FR4GTP.gethp() << std::endl;
	std::cout << "maxhp "<< FR4GTP.getmaxHp() << std::endl;
	std::cout << "curent ep "<< FR4GTP.geteP() << std::endl;
	std::cout << "curent maxep "<< FR4GTP.getmaxEp() << std::endl;
	std::cout << "curent levle "<< FR4GTP.getlevle() << std::endl;
	std::cout << "melee damage "<< FR4GTP.getmeleeDamage() << std::endl;
	std::cout << "ranaged damage "<< FR4GTP.getrangeAttackDamage() << std::endl;
	std::cout << "armour "<< FR4GTP.getarmour() << std::endl;
	std::cout << "name "<< FR4GTP.getname() << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << std::endl;
//testing membre functions
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Testing FragTrap Attacks" << std::endl;
	FR4GTP.rangedAttack("Badass!");
	FR4GTP.meleeAttack("Badass!");
//energy testing
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "Energy testing" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << FR4GTP.geteP() << std::endl;
	FR4GTP.vaulthunter_dot_exe("Badass!");
	std::cout << FR4GTP.geteP() << std::endl;
	FR4GTP.vaulthunter_dot_exe("Badass!");
	std::cout << FR4GTP.geteP() << std::endl;
	FR4GTP.vaulthunter_dot_exe("Badass!");
	std::cout << FR4GTP.geteP() << std::endl;
	FR4GTP.vaulthunter_dot_exe("Badass!");
	std::cout << FR4GTP.geteP() << std::endl;
	FR4GTP.vaulthunter_dot_exe("Badass!");
	std::cout << FR4GTP.geteP() << std::endl;
	FR4GTP.energyPack(999);
	std::cout << FR4GTP.geteP() << std::endl;
	FR4GTP.energyPack(112);
	std::cout << FR4GTP.geteP() << std::endl;
	FR4GTP.vaulthunter_dot_exe("Badass!");
	FR4GTP.vaulthunter_dot_exe("Badass!");
	FR4GTP.vaulthunter_dot_exe("Badass!");
	FR4GTP.vaulthunter_dot_exe("Badass!");
	FR4GTP.vaulthunter_dot_exe("Badass!");
	std::cout << FR4GTP.geteP() << std::endl;
	FR4GTP.energyPack(999);
	std::cout << FR4GTP.geteP() << std::endl;
	FR4GTP.vaulthunter_dot_exe("Badass!");
	FR4GTP.vaulthunter_dot_exe("Badass!");
	FR4GTP.vaulthunter_dot_exe("Badass!");
	FR4GTP.vaulthunter_dot_exe("Badass!");
	FR4GTP.vaulthunter_dot_exe("Badass!");
	std::cout << FR4GTP.geteP() << std::endl;
//hp testing
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "Hitpoint testing" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << FR4GTP.gethp() << std::endl;
	FR4GTP.beRepaired(100);
	std::cout << FR4GTP.gethp() << std::endl;
	FR4GTP.beRepaired(0);
	std::cout << FR4GTP.gethp() << std::endl;
	FR4GTP.takeDamage(10);
	std::cout << FR4GTP.gethp() << std::endl;
	FR4GTP.beRepaired(5);
	std::cout << FR4GTP.gethp() << std::endl;
	FR4GTP.takeDamage(90);
	FR4GTP.takeDamage(5);
	FR4GTP.takeDamage(4);
	std::cout << FR4GTP.gethp() << std::endl;
	FR4GTP.takeDamage(10);
	std::cout << FR4GTP.gethp() << std::endl;
	FR4GTP.takeDamage(100);
	std::cout << FR4GTP.gethp() << std::endl;
	FR4GTP.takeDamage(100);
	std::cout << FR4GTP.gethp() << std::endl;
	FR4GTP.beRepaired(420);
	std::cout << FR4GTP.gethp() << std::endl;

	std::cout << "***********************************************" << std::endl;
	std::cout << "ScavTrap testing" << std::endl;
	std::cout << "***********************************************" << std::endl;
	std::cout << "Testing challange new comer" << std::endl;
	ScavTrap Scav("ScavTrap");
	Scav.challengeNewcomer();
	Scav.beRepaired(100);
	Scav.challengeNewcomer();
	Scav.beRepaired(100);
	Scav.challengeNewcomer();
	Scav.beRepaired(100);
	Scav.challengeNewcomer();
	Scav.beRepaired(100);
	Scav.challengeNewcomer();
	Scav.rangedAttack("Badass!");
	Scav.meleeAttack("Badass!");
	std::cout << "***********************************************" << std::endl;
	std::cout << "Testing ScavTrap varibles" << std::endl;
	std::cout << "***********************************************" << std::endl;
	std::cout << "curent hp "<< Scav.gethp() << std::endl;
	std::cout << "maxhp "<< Scav.getmaxHp() << std::endl;
	std::cout << "curent ep "<< Scav.geteP() << std::endl;
	std::cout << "curent maxep "<< Scav.getmaxEp() << std::endl;
	std::cout << "curent levle "<< Scav.getlevle() << std::endl;
	std::cout << "melee damage "<< Scav.getmeleeDamage() << std::endl;
	std::cout << "ranaged damage "<< Scav.getrangeAttackDamage() << std::endl;
	std::cout << "armour "<< Scav.getarmour() << std::endl;
	std::cout << "name "<< Scav.getname() << std::endl;
	std::cout << "***********************************************" << std::endl;
	std::cout << "Testing ScavTrap attacks" << std::endl;
	std::cout << "***********************************************" << std::endl;
//testing membre functions
	Scav.rangedAttack("Badass!");
	Scav.meleeAttack("Badass!");
//energy testing
	std::cout << "***********************************************" << std::endl;
	std::cout << "Health testing" << std::endl;
	std::cout << "***********************************************" << std::endl;
	std::cout << Scav.gethp() << std::endl;
	Scav.beRepaired(100);
	std::cout << Scav.gethp() << std::endl;
	Scav.beRepaired(0);
	std::cout << Scav.gethp() << std::endl;
	Scav.takeDamage(10);
	std::cout << Scav.gethp() << std::endl;
	Scav.beRepaired(5);
	std::cout << Scav.gethp() << std::endl;
	Scav.takeDamage(90);
	Scav.takeDamage(5);
	Scav.takeDamage(0);
	Scav.takeDamage(2);
	std::cout << Scav.gethp() << std::endl;
	Scav.takeDamage(10);
	std::cout << Scav.gethp() << std::endl;
	Scav.takeDamage(100);
	std::cout << Scav.gethp() << std::endl;
	Scav.beRepaired(420);
	std::cout << Scav.gethp() << std::endl;

	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "Testing FragTrap varibles" << std::endl;
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	ClapTrap Clap;
	std::cout << "curent hp "<< Clap.gethp() << std::endl;
	std::cout << "maxhp "<< Clap.getmaxHp() << std::endl;
	std::cout << "curent ep "<< Clap.geteP() << std::endl;
	std::cout << "curent maxep "<< Clap.getmaxEp() << std::endl;
	std::cout << "curent levle "<< Clap.getlevle() << std::endl;
	std::cout << "melee damage "<< Clap.getmeleeDamage() << std::endl;
	std::cout << "ranaged damage "<< Clap.getrangeAttackDamage() << std::endl;
	std::cout << "armour "<< Clap.getarmour() << std::endl;
	std::cout << "name "<< Clap.getname() << std::endl;
//testing membre functions
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "Testing FragTrap Attacks" << std::endl;
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	Clap.rangedAttack("Badass!");
	Clap.meleeAttack("Badass!");
//testing hp
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "Testing FragTrap HP" << std::endl;
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << Clap.gethp() << std::endl;
	Clap.beRepaired(100);
	std::cout << Clap.gethp() << std::endl;
	Clap.beRepaired(0);
	std::cout << Clap.gethp() << std::endl;
	Clap.takeDamage(10);
	std::cout << Clap.gethp() << std::endl;
	Clap.beRepaired(5);
	std::cout << Clap.gethp() << std::endl;
	Clap.takeDamage(90);
	Clap.takeDamage(5);
	Clap.takeDamage(4);
	std::cout << Clap.gethp() << std::endl;
	Clap.takeDamage(10);
	std::cout << Clap.gethp() << std::endl;
	Clap.takeDamage(100);
	std::cout << Clap.gethp() << std::endl;
	Clap.takeDamage(100);
	std::cout << Clap.gethp() << std::endl;
	Clap.beRepaired(420);
	std::cout << Clap.gethp() << std::endl;
	

	return (0);
}
