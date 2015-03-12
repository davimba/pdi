#ifndef IMAGEN_H
#define IMAGEN_H
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

class Imagen
{
    public:
        Imagen();
        virtual ~Imagen();
        Imagen(const Imagen& other);
        Imagen(int ancho, int alto);
        int ancho() const {return _ancho;}
        int alto() const {return _alto;}
        int getpixel(int i, int j) const {
            return _pixels[j*_ancho + i];
        }
        void setpixel(int i, int j, int valor){
            _pixels[j*_ancho+i] = valor;
        }
        void setpixel(int i, int valor)
        {
          _pixels[i] = valor;
        }
        int getpixel(int i) const {
            return _pixels[i];
        }

        void suma(Imagen,std::string);
        void lee(std::string nombrefichero);
        void escribe(std::string nombrefichero)const;
    protected:
    private:
        std::vector<int> _pixels;
        int _ancho, _alto;
};

#endif // IMAGEN_H
