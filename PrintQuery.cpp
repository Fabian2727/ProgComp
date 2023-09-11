#include <iostream>
#include <bits/stdc++.h>
//template <class T>
//using namespace std;

int calcular_cifras(int n)
{
	int contador = 0;
	while (n > 0)
	{
		n = n / 10;
		contador++;
	}
	return 4 - contador;
}

void Print(int *vector,int n)
{
	//if (!root) return;
	int cantidad = log2(n)+1;
	//CBinTreeNode<T>* tmp = new CBinTreeNode<T>(-1);

	std::queue< int > aux;
	std::queue< int > aux2;

	for (int x = 0; x < n; x++)
	{
		aux.push(vector[x]);
	}
	int contador = 0;
	int espacio = pow(2, cantidad);
	int nivel = 1;
	int condicion = 0;
	int medio = 1;
	aux2 = aux;
	aux2.pop();
	while (contador < cantidad)
	{
		for (int y = 0; y < nivel; y++)
		{
			if (nivel > 1)
			{
				for (int z = 0; z < espacio; z++)
				{
					std::cout << "    ";
				}
				if (y % 2 == 0 && aux2.front() != -1)
				{
					std::cout << "|   ";
				}
				else if (aux2.front() != -1)
				{
					std::cout << "   |";
				}
				else
				{
					std::cout << "    ";
				}
				aux2.pop();
				for (int z = 0; z < espacio - 1; z++)
				{
					std::cout << "    ";
				}
			}
		}
		std::cout << std::endl;
		for (int y = 0; y < nivel; y++)
		{
			if (nivel == 1)
			{
				for (int z = 0; z < espacio / 2; z++)
				{
					std::cout << "    ";
				}
				for (int z = 0; z < espacio / 2; z++)
				{
					std::cout << "____";
				}
				for (int cifras = 0; cifras < calcular_cifras(aux.front()); cifras++)
				{
					std::cout << 0;
				}
				std::cout << aux.front();
				for (int z = 0; z < espacio / 2; z++)
				{
					std::cout << "____";
				}
				for (int z = 0; z < espacio / 2; z++)
				{
					std::cout << "    ";
				}
			}
			else if (aux.front() != -1)
			{
				for (int z = 0; z < espacio / 2; z++)
				{
					std::cout << "    ";
				}
				for (int z = 0; z < espacio / 2; z++)
				{
					std::cout << "____";
				}
				for (int cifras = 0; cifras < calcular_cifras(aux.front()); cifras++)
				{
					std::cout << 0;
				}
				std::cout << aux.front();
				for (int z = 0; z < espacio / 2; z++)
				{
					std::cout << "____";
				}
				for (int z = 0; z < espacio / 2 - 1; z++)
				{
					std::cout << "    ";
				}
			}
			else
			{
				for (int z = 0; z < espacio; z++)
				{
					std::cout << "    ";
				}
				std::cout << "    ";
				for (int z = 0; z < espacio - 1; z++)
				{
					std::cout << "    ";
				}
			}
			aux.pop();
			medio++;
		}
		std::cout << std::endl;
		nivel = nivel * 2;
		contador++;
		espacio = espacio / 2;
		medio = 1;
		condicion = 0;
	}
	std::cout << std::endl;
}

int main() {
  int v [15] = {36,10,26,3,7,11,15,1,2,3,4,5,6,7,8};
  Print(v, 15);
  std::cout << "Hello World!\n";
}
