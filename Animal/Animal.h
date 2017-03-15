#ifndef ANIMAL_H
#define ANIMAL_H

#include "../Point.h"
#include "../Cell.h"
#include <string>

class Animal : public Cell{
	public:
		/**
		* Animal ctor
		*/
		Animal();

		/**
		* Animal ctor with params
		*/
		Animal(int _jenis, int _kelas, bool _isJinak, Point _point, string _nama, string _habitat, int _porsi);

		/**
		* Get Animal Order.
		*/
		int getJenis();


		/**
		* Set Animal's Order
		* @param _jenis Jenis of Animal.
		*/
		void setJenis(int _jenis);

		/**
		* Get Animal's class.
		*/
		int getKelas();

		/**
		* Set Animal's class.
		*/
		void setKelas(int _kelas);

        /**
		* Check whether animal is jinak or not.
		*/
		bool getIsJinak();

		/**
		* Set Animal's isJinak
		*/
		void setIsJinak(bool _isJinak);

		/**
		* Get point of Animal
		*/
		Point getPoint();

        /**
		* Get Animal Point
        * @param _point Point input
		*/
		void setPoint(Point _point);

		/**
        * Get nama of Animal
        */
        string getNama();

		/**
        * Set Animal's nama
        */
        void setNama(string _nama);

        /**
        * Get habitat of Animal
        */
        string getHabitat();

        /**
        * Set Animal's habitat
        * @param _habitat Habitat of Animal
        */
        void setHabitat(string _habitat);

        /**
        * Get porsiMakan of Animal
        */
        int getPorsiMakan();

        /**
        * Interact with animal
        * @param _porsi new porsiMakan input
        */
        void setPorsiMakan(int _porsi);

        /**
        * Interact with animal
        */
        virtual void interact() = 0;

	protected:
		int jenis;		/*!< indicate Animal order*/
		int kelas; 		/*!< indicate Animal class*/
		bool isJinak;   /*!< indicate whether Animal is jinak or not*/
		Point point;	/*!< point(x, y) of Animal */
		string nama;    /*!< string that represent the Animal */
		string habitat; /*!< habitat of Animal */
		int porsiMakan; /*!< the Animal's daily eat dose*/
};

#endif
