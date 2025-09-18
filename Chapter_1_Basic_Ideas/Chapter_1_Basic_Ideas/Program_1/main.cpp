// this program calculates the atomic mass of a neutral sodium atom
// and it prints out the number of electrons, protons and neutrons

import std;

int main() {

	int num_protons {11};
	int num_electrons {11};
	int num_neutrons {12};

	// atomic mass of a neutral sodium atom
	int atomic_mass = num_protons + num_neutrons;

	// output data about sodium atom
	std::println("The atomic mass of a neutral sodium atom is {}.", atomic_mass);
	std::println("A sodium atom has {} electrons, {} protons and {} neutrons.", num_electrons, num_protons, num_neutrons);

	// not really required but here it is
	return 0;
}
