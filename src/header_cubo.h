#ifndef CLASECUBO
#define CLASECUBO

class Cubo{
	private:
		double largo,ancho;
	public:
		Cubo(double largo,double ancho);
		~Cubo();
		double get_ancho() const;
		double get_largo() const;
		void set_ancho(double ancho);
		void set_largo(double largo);
	};
#endif
