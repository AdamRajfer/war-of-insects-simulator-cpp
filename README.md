# War of Insects Simulator

The program was developed to present the simulation of war between four insect species:

* **ants** - represented by red points
* **wasps** - represented by blue points
* **dytiscidaes** - represented by white points
* **thanasimuses** - represented by green points

The program was developed in C++. It is object-oriented. I invite you to get acquainted with the [UML class diagram](https://drive.google.com/open?id=1LkP93bEYvLP3exUP11vOMPFMFAU7-f4b) and the [documentation](https://drive.google.com/open?id=1DSIaseRuXTFllZ5HAdUCiAn6agQD84RP) (written in Polish language).

## Species and their enemies

* ants attack wasps
* wasps attack dytiscidaes
* dytiscidaes attack thanasimuses
* thanasimuses attack ants

The simulation ends in two cases:

* there are only insects of one specie in the environment
* there are insects of two species in the environment that don't attack each other

## Eusocialities and their roles

Every insect specie can perform one of the four roles:

* queens - they need to be inseminated by drones to born new soldiers
* drones - they need to find the queen, inseminate her and regenerate
* soldiers - they need to kill the enemy insect
* workers - they need to cure the injured (alive) family insect

## Types of insects

Using multiple inheritance, the 16 types of insects was implemented:

* queen ant insect
* drone ant insect
* dytiscidae ant insect
* thanasimus ant insect
* queen wasp insect
* drone wasp insect
* dytiscidae wasp insect
* thanasimus wasp insect
* queen dytiscidae insect
* drone dytiscidae insect
* dytiscidae dytiscidae insect
* thanasimus dytiscidae insect
* queen thanasimus insect
* drone thanasimus insect
* dytiscidae thanasimus insect
* thanasimus thanasimus insect

## Prerequisites

* Linux or macOS
* CMake
* SFML library in C++

## Installing dependencies

Before building the project you need to install CMake and SFML library in C++:

```
sudo apt install cmake
sudo apt install libsfml-dev
```

## Downloading the data

You need to download [data](https://drive.google.com/open?id=1x76pKPL-et9CT3tlI287IA9So87KIS3a) folder and put it into *Workspace/War_of_Insects_Simulator/C++/*. It contains *arial.ttf* font file which is needed to display the number of insects in the window.

## Building the simulation

```
bash build_simulation.sh
```

## Running the simulation

```
bash run_simulation.sh
```
