#ifndef ARRAY_H
#define ARRAY_H
#include "Point.h"

namespace Saurino {
	namespace Containers{

		class Array
		{
		private:
			CAD::Point** m_data;
			int m_size;

		public:
			// Constructor
			Array();
			Array(int size);
			Array(const Array& src);
			// Destructor
			~Array();

			// member functions
			int Size() const;
			void SetElement(int index, CAD::Point src);
			CAD::Point& GetElement(int index);

			// overloaded operators
			Array& operator = (Array& src);
			CAD::Point& operator [] (int index);
			const CAD::Point& operator [] (int index) const;

		};

	}

}
#endif