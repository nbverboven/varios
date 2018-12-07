#include <iostream>
#include <vector>

/* Función para imprimir por stdout un vector de un tipo genérico T.
   Requiere que el tipo T tenga definido el operador <<. */
template <class T>
std::ostream& operator<<(std::ostream &os, const std::vector<T> &v) {
	os << '[';
	for (unsigned int i = 0; i < v.size(); ++i) {
		os << v[i];
		if (i < v.size()-1) {
			os << ',' <<  ' ';
		}	
	}
	os << ']';
	return os;
}

/* Función para imprimir por stdout un vector de vectores de un tipo genérico T.
   Requiere que el tipo T tenga definido el operador <<. */
template <class T>
std::ostream& operator<<(std::ostream &os, const std::vector<std::vector<T>> &v) {
	os << '[';
	for (unsigned int i = 0; i < v.size(); ++i) {
		os << v[i];
		if (i < v.size()-1) {
			os << std::endl << ' ';
		}
	}
	os << ']';
	return os;
}
