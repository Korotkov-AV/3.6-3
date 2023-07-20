// 3.6-3.cpp основа из 3.5-2.cpp 

//#include <iostream>
//#include <Windows.h>
//#include <string>
#include "1 Triangle/Triangle.h"
#include "2 Triangle_p/Triangle_p.h"
#include "3 Triangle_rb/Triangle_rb.h"
#include "4 Triangle_rs/Triangle_rs.h"
#include "5 Quadrangle/Quadrangle.h"
#include "5 Quadrangle/5.1 Quadrangle_p/Quadrangle_p.h"
#include "5 Quadrangle/5.1 Quadrangle_p/5.1.1 Quadrangle_r/Quadrangle_r.h"
#include "5 Quadrangle/5.1 Quadrangle_p/5.1.2 Quadrangle_par/Quadrangle_par.h"
#include "5 Quadrangle/5.1 Quadrangle_p/5.1.2 Quadrangle_par/5.1.2.1 Quadrangle_kv/Quadrangle_kv.h"




void print_info (Triangle* p) {
    p->print();
}


int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle t(10, 20, 30, 40, 30, 110);
    /*  t.print();*/
    Triangle* t1 = &t;
    print_info(t1);

    Triangle_p t_p(10, 20, 30, 40);
  /*  t_p.print();*/
    Triangle* t_p1 = &t_p;
    print_info(t_p1);

    Triangle_rb rb(20, 30, 40);
    //rb.print();
    Triangle* rb1 = &rb;
    print_info(rb1);

    Triangle_rs rs(40);
    // rs.print();
    Triangle* rs1 = &rs;
    print_info(rs1);


    Quadrangle q(10, 20, 30, 40, 40, 30, 110, 12);
    //q.print();
    Triangle* q1 = &q;
    print_info(q1);

    Quadrangle_p p(20, 30, 30, 110);
    //p.print();
    Triangle* p1 = &p;
    print_info(p1);


    Quadrangle_r r(30, 30, 110);
    //r.print();
    Triangle* r1 = &r;
    print_info(r1);

    Quadrangle_par par(30, 50);
    //par.print();
    Triangle* par1 = &par;
    print_info(par1);

    Quadrangle_kv kv(50);
    //kv.print();
    Triangle* kv1 = &kv;
    print_info(kv1);


    std::cout << "Конец файла!\n";
    return 0;
}

