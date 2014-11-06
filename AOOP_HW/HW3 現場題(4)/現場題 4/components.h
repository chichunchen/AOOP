#ifndef components_H
#define components_H

enum color {Black, Brown, Red, Orange, Yellow, Green, Blue, Violet, Gray, White, Gold, Silver, None};

class Supply;

class components{
    public:
        double **pic;
        double value;
        Supply *s;
        components(double, double, double);         
        components operator << (Supply);
        components operator >> (int);
};

class Supply{
    private:
        double voltage;
        double frequency;
    public:
        Supply(double, double);
        double freq();  
        double volt();       
};

#endif
