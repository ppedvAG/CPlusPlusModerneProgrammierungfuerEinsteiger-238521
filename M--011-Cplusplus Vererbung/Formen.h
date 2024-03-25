#ifndef FORMEN_H
#define FORMEN_H
class Form {
protected:
	float x;
	float y;
	const static float pi;
public:
	Form(float x, float y);
	virtual float Flaeche() = 0;
};

class Kreis : public Form {
public:
	Kreis(float r);

	virtual float Flaeche() override;

	void KreisMethode();
};

class Kugel : public Form {
public:
	Kugel(float r);

	virtual float Flaeche() override;

	void KugelMethode();
};

class Zylinder : public Form {
public:
	Zylinder(float r, float h);

	virtual float Flaeche() override;

	void ZylinderMethode();
};


#endif // !FORMEN_H
