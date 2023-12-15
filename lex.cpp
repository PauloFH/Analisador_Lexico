#include "lex.h"
#include "tokens.h"
#include <iostream>
using std::cout;

void Lex::Start()
{
    
    while ((lookahead = scanner.yylex()) != 0)
    {
    
        switch(lookahead)
        {   case TDADOS: cout << "Tipo de dados:" << scanner.YYText() << "\n";break;
            case CLASS: cout << "CLASS: " << scanner.YYText() << "\n"; break;
            case EQUIVALENTTO: cout << "EQUIVALENTTO" <<  "\n";break;
            case INDIVIDUALS: cout << "INDIVIDUALS:" << scanner.YYText() << "\n"; break;
            case SUBCLASSOF: cout << "SUBCLASSOF"<< "\n";break;
            case DISJOINTCLASSES: cout << "DISJOINTCLASSES" << "\n";break;
            case SOME:cout << "SOME" << "\n";break;
            case ALL:cout << "ALL" << "\n";break;
            case VALUE:cout << "VALUE" << "\n";break;
            case MIN:cout << "MIN" << "\n";break;
            case MAX:cout << "MAX" << "\n";break;
            case NOT:cout << "NOT" << "\n";break;
            case AND:cout << "AND" << "\n";break;
            case OR:cout << "OR" << "\n";break;
            case EXACTLY:cout << "EXACTLY" << "\n";break;
            case THAT:cout << "THAT" << "\n";break;
            case RESERVADO:cout << "RESERVADO" << "\n";break;
            case HAS: cout << "HAS:" << scanner.YYText() << "\n"; break;
            case IS: cout << "IS:" << scanner.YYText() << "\n"; break;
            case NUM: cout << "NUM: " << scanner.YYText() << "\n"; break;
            case RELOP: cout << "RELOP: " << scanner.YYText() << "\n"; break;
            case PROPRIEDADES: cout << "PROPRIEDADES:"<< scanner.YYText()<<"\n";break;
        }
    }
}
