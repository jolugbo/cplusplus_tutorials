#include <iostream>
#include <regex>
using namespace std;
class RegularExpressionMatching {
public:
	RegularExpressionMatching(string s, string p) {
        if (p.find('.*') != std::string::npos)
        {
            if (regex_match(s, regex(p + "(.*)")))
                cout << "matched\n";
        }
        else if(p.find('.') != std::string::npos)
        {
            if (regex_match(s, regex(p + "(.)")))
                cout << "string:literal => matched\n";
        }
        else
        {
            if (regex_match(s, regex(p )))
                cout << "string:literal => matched\n";
        }
      /*  const char mystr[] = "SoftwareTestingHelp";
        string str("software");
        regex str_expr("(soft)(.*)");

        if (regex_match(str, str_expr))
            cout << "string:object => matched\n";

        if (regex_match(str.begin(), str.end(), str_expr))
            cout << "string:range(begin-end)=> matched\n";

        cmatch cm;
        regex_match(mystr, cm, str_expr);

        smatch sm;
        regex_match(str, sm, str_expr);

        regex_match(str.cbegin(), str.cend(), sm, str_expr);
        cout << "String:range, size:" << sm.size() << " matches\n";


        regex_match(mystr, cm, str_expr, regex_constants::match_default);

        cout << "the matches are: ";
        for (unsigned i = 0; i < sm.size(); ++i) {
            cout << "[" << sm[i] << "] ";
        }*/

        cout << endl;
	}
};