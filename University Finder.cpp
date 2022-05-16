
/*              !!!!!!!DISCLAIMER!!!!!!!!
 This code will run on visual studio if you will use replit certain link wont be able to open and replit doesnt even support some libraries  */


#include <iostream>
#include <cmath> // for maths operations
#include <cstdlib> // library for system function that is used to open certain links and clear previous screen and also in delaying the program
#include<fstream> // for file streaming
#include<string> // we use this library to get specific function to help us read from files
using namespace std;

// These all are the general variables

char choice, marks, opt_1, choice_of_uni, detailsEnter, m_k;
int select_uni, choice_, ch_2;
double avg_1,ielts_score, ielts_result, o_levels, a_levels, amn_of_money, amount_, bdg_2;
string ent_opt, opt_2, w_e_b, currency_to_con, bdg_1, mon_1, re_enter,sch_ship,apl;
    
void course();
void grades();
void budget();
void budget2();
void overall();
void ent();
void ent_2();
void convertor();
void summary();



// MAIN FUNCTION
int main()
{
    system("CLS"); // To clear the previous screen
    //MAIN MENU
    cout << endl;
    cout << "\t\t\t\t ~WELCOME TO UNI FINDER~ :)\n";
    cout << "\t\t  _____________________________________________________\n"
        "\t\t |                                                     | \n"
        "\t\t |                   MAIN MENU                         | \n"
        "\t\t |                  -----------                        | \n"
        "\t\t |                 ~ UNI FINDER~                       | \n"
        "\t\t |                                                     | \n"
        "\t\t |           1.  FIND UNIVERSITIES BY COURSE           | \n"
        "\t\t |                                                     | \n"
        "\t\t |           2.  FIND UNIVERISTIES BY GRADES           | \n"
        "\t\t |                                                     | \n"
        "\t\t |           3.  FIND UNIVERSITY BY BUDGET             | \n"
        "\t\t |                                                     | \n"
        "\t\t |           4.  BEST OVERALL UNIVERSITIES             | \n"
        "\t\t |                                                     | \n"
        "\t\t |           5.  CURRENCY CONVERTOR                    | \n"
        "\t\t |                                                     | \n"
        "\t\t |           6.  EXIT                                  | \n"
        "\t\t |_____________________________________________________| \n"
        << endl;
    // USER WILL ENTER THE CHOICE TO CHOOSE ANY CHOICE SWUTCH STATEMENT IS USED
    cout << "\t\t\tENTER YOUR CHOICE ->> ";    cin >> choice;

    switch (choice) {
        case '1': course();
        break;

    case '2': grades();
        break;

    case '3':budget();
        break;

    case '4':overall();
        break;

    case '5':convertor();
        break;

    case '6':
        cout << endl;
        system("pause");
        cout << endl;
        cout << "\t\t\t **THANK YOU FOR USING OUR SERVIVES** " << endl;
        break;

    default: cout << "Please! Enter The Right Number :(" << endl;
        main();

    }
}
// FUNCTION FOR COURSE
void course() {
    system("CLS"); // To clear the previous screen
    cout << endl;
    // SHOWING UNIVERSITIES OPTIONS
    cout << "\t\t Which course would you like to study?" << endl;
    cout << endl;
    cout << "\t\t  _____________________________________________\n"
        "\t\t |                                              | \n"
        "\t\t |              UNIVERSITIES BY COURSE          | \n"
        "\t\t |            ------------------------          | \n"
        "\t\t |                                              | \n"
        "\t\t |            1.  COMPUTER SCIENCE              | \n"
        "\t\t |                                              | \n"
        "\t\t |            2.  MEDICINE                      | \n"
        "\t\t |                                              | \n"
        "\t\t |            3.  ENGINEERING                   | \n"
        "\t\t |                                              | \n"
        "\t\t |            4.  BUSINESS                      | \n"
        "\t\t |                                              | \n"
        "\t\t |            5.  ARTS                          | \n"
        "\t\t |                                              | \n"
        "\t\t |            =======================           | \n"
        "\t\t |            0. GO BACK TO MAIN MENU           | \n"
        "\t\t |______________________________________________| \n"
        << endl;

    // TAKING USERS INPUT
    cout << "\t\t\tEnter your choice --> :";    cin >> select_uni;
    cout << endl;
    // SHOWING UNIVERSITIES DATA
    if (select_uni == 1) {
        system("CLS"); // To clear the previous screen
        cout << "\t\t\t The List of Top Universities for CS" << endl;
        cout << "\t\t  _________________________________________\n"
            "\t\t |     *Top Univeristies in the UK*          |\n"
            "\t\t ---------------------------------------------\n"
            "\t\t |  1.   University of Oxford.               |\n"
            "\t\t |  2.   University College London.          |\n"
            "\t\t |  3.   Imperial College London.            |\n"
            "\t\t |  4.   University of Cambridge.            |\n"
            "\t\t |  5.   University of Edinburgh.            |\n"
            "\t\t |___________________________________________|\n"
            << endl;
        cout << "\t\t\t\t  ======================= " << endl;
        cout << "\t\t\t\t  0.GO BACK TO MAIN MENU " << endl;
        cout << "\t\t\t\t  ======================= " << endl;
        cout << endl;

        cout << "In which university you are Interested? = ";
        cin >> choice_of_uni;

        // AGAIN SWITCH STATEMENT IS USED TO SELECT A UNIVERISTY OF THEIR CHOICE

        switch (choice_of_uni) {
        case '1':
            cout << endl;

        showagain:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF OXFORD * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ox.ac.uk/students/fees-funding/"); // SYSTEM START WILL OPEN LINK ONLY IN WINDOWS AND FOR MAC SYSTEM OPEN COMMAND IS USED
                break;
            case '2':
                system("start https://www.ox.ac.uk/students/visa");
                break;
            case '3':
                system("start https://www.ox.ac.uk/admissions/undergraduate/applying-to-oxford");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain;
            }

            break;
        case '2':
            cout << endl;

        showagain1:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY COLLEGE LONDON * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ucl.ac.uk/students/fees-and-funding");
                break;
            case '2':
                system("start https://www.ucl.ac.uk/students/immigration-and-visas");
                break;
            case '3':
                system("start https://www.ucl.ac.uk/prospective-students/graduate/taught-degrees/applying-graduate-taught-study-ucl");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
                cout << "Do you want to re-enter the number ? Y/N :: ";
                cin >> re_enter;
                if (re_enter == "1" || re_enter == "Y" || re_enter == "y" || re_enter == "yes" || re_enter == "Yes") {
                    goto showagain1;
                }
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain1;
            }

            break;

        case '3':
            cout << endl;

        showagain2:
            cout << "SEE MORE DEATILS ABOUT * IMPERIAL COLLEGE LONDON * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.imperial.ac.uk/study/pg/fees-and-funding/");
                break;
            case '2':
                system("start https://www.imperial.ac.uk/study/international-students/visas-and-immigration/");
                break;
            case '3':
                system("start https://www.imperial.ac.uk/study/pg/apply/how-to-apply/");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain2;
            }

            break;

        case '4':
            cout << endl;

        showagain3:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF CAMBRIDGE * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.internationalstudents.cam.ac.uk/applying/fees-and-financial-support");
                break;
            case '2':
                system("start https://www.internationalstudents.cam.ac.uk/immigration");
                break;
            case '3':
                system("start https://www.internationalstudents.cam.ac.uk/applying");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain3;
            }

            break;

        case '5':
            cout << endl;

        showagain4:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF EDINBURGH * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ed.ac.uk/clinical-sciences/internal-medicine/fees-scholarships");
                break;
            case '2':
                system("start https://www.ed.ac.uk/studying/international/student-visas");
                break;
            case '3':
                system("start https://www.ed.ac.uk/global/study-abroad/how-to-apply/apply-now");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain4;
            }
        case '0':
            main();
            break;
        default:
            cout << "Please Enter the Correct Number :(" << endl;

        }


        cout << "If you want to know more about the UK's University Press 1 Otherwise Press any key to continue:";
        int ukuni;
        cin >> ukuni;
        if (ukuni == 1)
        {
            system("start https://www.thecompleteuniversityguide.co.uk/league-tables/rankings");
        }


        //THE OPTION TO ASK THE USER IF HE WANTS TO GO BACK TO THE MAIN FUNCTION OR NOT IS STORED IN ENT2() FUNCTION.
        cout << endl;
        ent_2();
    }

    // DOING ALL THAT AGAIN

    else if (select_uni == 2) {
        system("CLS"); // To clear the previous screen
        cout << "\t\t The List of Top Universities for Medicine" << endl;
        cout << "\t\t  _______________________________________\n"
            "\t\t |      *Top Univeristies in the UK*          |\n"
            "\t\t _____________________________________________\n"
            "\t\t |  1.   University of Oxford.                | \n"
            "\t\t |  2.   Imperial College London.             | \n"
            "\t\t |  3.   University College London.           | \n"
            "\t\t |  4.   University of Cambridge.             | \n"
            "\t\t |  5.   Swansea University.                  | \n"
            "\t\t |____________________________________________|\n"
            << endl;
        cout << "\t\t\t\t  ======================= " << endl;
        cout << "\t\t\t\t  0.GO BACK TO MAIN MENU " << endl;
        cout << "\t\t\t\t  ======================= " << endl;
        cout << endl;
        cout << "In which university you are Interested? = ";
        cin >> choice_of_uni;
        switch (choice_of_uni) {
        case '1':
            cout << endl;

        showagain5:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF OXFORD * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ox.ac.uk/students/fees-funding/");
                break;
            case '2':
                system("start https://www.ox.ac.uk/students/visa");
                break;
            case '3':
                system("start https://www.ox.ac.uk/admissions/undergraduate/applying-to-oxford");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain5;
            }

            break;
        case '2':
            cout << endl;

        showagain6:
            cout << "SEE MORE DEATILS ABOUT * IMPERIAL COLLEGE LONDON * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.imperial.ac.uk/study/pg/fees-and-funding/");
                break;
            case '2':
                system("start https://www.imperial.ac.uk/study/international-students/visas-and-immigration/");
                break;
            case '3':
                system("start https://www.imperial.ac.uk/study/ug/apply/");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain6;
            }

            break;

        case '3':
            cout << endl;

        showagain7:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY COLLEGE LONDON * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ucl.ac.uk/students/fees-and-funding");
                break;
            case '2':
                system("start https://www.ucl.ac.uk/students/immigration-and-visas");
                break;
            case '3':
                system("start https://www.ucl.ac.uk/prospective-students/graduate/taught-degrees/applying-graduate-taught-study-ucl");
                break;
            case '0':
                main(); // RETURNING TO MAIN FUNCTION
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain7;
            }

            break;

        case '4':
            cout << endl;

        showagain8:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF CAMBRIDGE * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.internationalstudents.cam.ac.uk/applying/fees-and-financial-support");
                break;
            case '2':
                system("start https://www.internationalstudents.cam.ac.uk/immigration");
                break;
            case '3':
                system("start https://www.internationalstudents.cam.ac.uk/applying");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain8;
            }

            break;

        case '5':
            cout << endl;

        showagain9:
            cout << "SEE MORE DEATILS ABOUT * SWANSEA UNIVERSITY * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://swansea.funnelback.co.uk/s/redirect?collection=www-en-meta&url=https%3A%2F%2Fwww.swansea.ac.uk%2Finternational-students%2Fmy-finances%2F&auth=PHCAaaI%2F8ll5%2BDqerMEAmA&profile=_default&rank=3&query=fee+and+funding");
                break;
            case '2':
                system("start https://swansea.funnelback.co.uk/s/redirect?collection=www-en-meta&url=https%3A%2F%2Fwww.swansea.ac.uk%2Finternational-campuslife%2Fimmigration%2F&auth=9S3%2B8efnwdA83ddh3pdEUg&profile=_default&rank=1&query=visa+and+immigration");
                break;
            case '3':
                system("start https://www.swansea.ac.uk/applyonline/");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain9;
            }

        case '0':
            main();
            break;
        }


        cout << "If you want to know more about the UK's University Press 1 Otherwise Press any key to continue:";
        int ukuni;
        cin >> ukuni;
        if (ukuni == 1)
        {
            system("start https://www.thecompleteuniversityguide.co.uk/league-tables/rankings");
        }


        //THE OPTION TO ASK THE USER IF HE WANTS TO GO BACK TO THE MAIN FUNCTION OR NOT IS STORED IN ENT2() FUNCTION.
        cout << endl;
        ent_2();

    }

    else if (select_uni == 3) {
        system("CLS"); // To clear the previous screen
        cout << "\t\t\t The List of Top Universities for Engineering" << endl;
        cout << "\t\t  __________________________________\n"
            "\t\t |        *Top Univeristies in the UK*          | \n"
            "\t\t ________________________________________________ \n"
            "\t\t |   1.   Imperial College London.              | \n"
            "\t\t |   2.   University of Cambridge.              | \n"
            "\t\t |   3.   University of Oxford.                 | \n"
            "\t\t |   4.   University of Manchester.             | \n"
            "\t\t |   5.   University of Nottingham.             | \n"
            "\t\t |______________________________________________|\n"
            << endl;
        cout << "\t\t\t\t  ======================= " << endl;
        cout << "\t\t\t\t  0.GO BACK TO MAIN MENU " << endl;
        cout << "\t\t\t\t  ======================= " << endl;
        cout << endl;
        cout << "In which university you are Interested? = ";
        cin >> choice_of_uni;
        switch (choice_of_uni) {
        case '1':
            cout << endl;

        showagain10:
            cout << "SEE MORE DEATILS ABOUT * IMPERIAL COLLEGE LONDON * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.imperial.ac.uk/study/pg/fees-and-funding/");
                break;
            case '2':
                system("start https://www.imperial.ac.uk/study/international-students/visas-and-immigration/");
                break;
            case '3':
                system("start https://www.imperial.ac.uk/study/ug/apply/");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain10;
            }

            break;
        case '2':
            cout << endl;

        showagain11:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF CAMBRIDGE * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.internationalstudents.cam.ac.uk/applying/fees-and-financial-support");
                break;
            case '2':
                system("start https://www.internationalstudents.cam.ac.uk/immigration");
                break;
            case '3':
                system("start https://www.internationalstudents.cam.ac.uk/applying");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain11;
            }

            break;

        case '3':
            cout << endl;

        showagain12:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF OXFORD * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ox.ac.uk/students/fees-funding/");
                break;
            case '2':
                system("start https://www.ox.ac.uk/students/visa");
                break;
            case '3':
                system("start https://www.ox.ac.uk/admissions/undergraduate/applying-to-oxford");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain12;
            }

            break;

        case '4':
            cout << endl;

        showagain13:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF MANCHESTER * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.manchester.ac.uk/study/international/finance-and-scholarships/fees/");
                break;
            case '2':
                system("start https://www.manchester.ac.uk/study/international/admissions/visa-guidance/");
                break;
            case '3':
                system("start https://www.manchester.ac.uk/study/undergraduate/applications/after-you-apply/guide-to-student-life/international/");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain13;
            }

            break;

        case '5':
            cout << endl;

        showagain14:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF NOTTINGHAM * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.nottingham.ac.uk/studywithus/what-next/fees-and-funding.aspx");
                break;
            case '2':
                system("start https://www.nottingham.ac.uk/studywithus/international-applicants/visa-help/index.aspx");
                break;
            case '3':
                system("start https://www.nottingham.ac.uk/studywithus/what-next/how-to-apply.aspx");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain14;
            }

        case '0':
            main();
            break;
        }


        cout << "If you want to know more about the UK's University Press 1 Otherwise Press any key to continue:";
        int ukuni;
        cin >> ukuni;
        if (ukuni == 1)
        {
            system("start https://www.thecompleteuniversityguide.co.uk/league-tables/rankings");
        }


        //THE OPTION TO ASK THE USER IF HE WANTS TO GO BACK TO THE MAIN FUNCTION OR NOT IS STORED IN ENT2() FUNCTION.
        cout << endl;
        ent_2();

    }

    else if (select_uni == 4) {
        system("CLS"); // To clear the previous screen
        cout << "\t\t\t The List of Top Universities for Business" << endl;
        cout << "\t\t  ________________________________\n"
            "\t\t |    *Top Univeristies in the UK*         | \n"
            "\t\t ______________________________________________ \n"
            "\t\t |  1.   University of Oxford.                | \n"
            "\t\t |  2.   University of St Andrews.            | \n"
            "\t\t |  3.   University College London(UCL).      | \n"
            "\t\t |  4.   London School of Economics           | \n"
            "\t\t |  5.   University of Strathclyde.           | \n"
            "\t\t |____________________________________________|\n"
            << endl;
        cout << "\t\t\t\t  ======================= " << endl;
        cout << "\t\t\t\t  0.GO BACK TO MAIN MENU " << endl;
        cout << "\t\t\t\t  ======================= " << endl;
        cout << endl;
        cout << "In which university you are Interested? = ";
        cin >> choice_of_uni;
        switch (choice_of_uni) {
        case '1':
            cout << endl;

        showagain15:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF OXFORD * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ox.ac.uk/students/fees-funding/");
                break;
            case '2':
                system("start https://www.ox.ac.uk/students/visa");
                break;
            case '3':
                system("start https://www.ox.ac.uk/admissions/undergraduate/applying-to-oxford");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain15;
            }

            break;
        case '2':
            cout << endl;

        showagain16:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF ST ANDREWS * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.st-andrews.ac.uk/students/money/fees/");
                break;
            case '2':
                system("start https://www.st-andrews.ac.uk/students/advice/visa-information/");
                break;
            case '3':
                system("start https://www.st-andrews.ac.uk/study/apply/ug/");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain16;
            }

            break;

        case '3':
            cout << endl;

        showagain17:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY COLLEGE LONDON * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ucl.ac.uk/students/fees-and-funding");
                break;
            case '2':
                system("start https://www.ucl.ac.uk/students/immigration-and-visas");
                break;
            case '3':
                system("start https://www.ucl.ac.uk/prospective-students/graduate/taught-degrees/applying-graduate-taught-study-ucl");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain17;
            }

            break;

        case '4':
            cout << endl;

        showagain18:
            cout << "SEE MORE DEATILS ABOUT * LONDON SCHOOL OF ECONOMICS * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.lse.ac.uk/study-at-lse/Undergraduate/fees-and-funding?from_serp=1");
                break;
            case '2':
                system("start https://info.lse.ac.uk/current-students/immigration-advice?from_serp=1");
                break;
            case '3':
                system("start https://www.lse.ac.uk/study-at-lse/Graduate/Prospective-students/How-to-Apply?from_serp=1");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain18;
            }

            break;

        case '5':
            cout << endl;

        showagain19:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF STRATHCLYDE * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.strath.ac.uk/studywithus/feesfunding/tuitionfees/");
                break;
            case '2':
                system("start https://www.strath.ac.uk/studywithus/internationalstudents/beforeyouarrive/visasimmigration/");
                break;
            case '3':
                system("start https://www.strath.ac.uk/studywithus/postgraduatetaught/howtoapply/");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain19;
            }

        case '0':
            main();
            break;
        default:
            cout << "Please Enter the Correct Number :(" << endl;
        };




        cout << "If you want to know more about the UK's University Press 1 Otherwise Press any key to continue:";
        int ukuni;
        cin >> ukuni;
        if (ukuni == 1)
        {
            system("start https://www.thecompleteuniversityguide.co.uk/league-tables/rankings");
        }


        //THE OPTION TO ASK THE USER IF HE WANTS TO GO BACK TO THE MAIN FUNCTION OR NOT IS STORED IN ENT2() FUNCTION.
        cout << endl;
        ent_2();

    }


    else if (select_uni == 5) {
        system("CLS"); // To clear the previous screen
        cout << "\t\t\t The List of Top Universities for Arts" << endl;
        cout << "\t\t  ________________________________________\n"
            "\t\t |        *Top Univeristies in the UK*        | \n"
            "\t\t ______________________________________________ \n"
            "\t\t |  1.   University of Oxford.                | \n"
            "\t\t |  2.   University College London.           | \n"
            "\t\t |  3.   Newcastle University.                | \n"
            "\t\t |  4.   Loughborough University.             | \n"
            "\t\t |  5.   University of Glasgow.               | \n"
            "\t\t |____________________________________________|\n"
            << endl;
        cout << "\t\t\t\t  ======================= " << endl;
        cout << "\t\t\t\t  0.GO BACK TO MAIN MENU " << endl;
        cout << "\t\t\t\t  ======================= " << endl;
        cout << endl;
        cout << "In which university you are Interested? = ";
        cin >> choice_of_uni;
        switch (choice_of_uni) {
        case '1':
            cout << endl;

        showagain20:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF OXFORD * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ox.ac.uk/students/fees-funding/");
                break;
            case '2':
                system("start https://www.ox.ac.uk/students/visa");
                break;
            case '3':
                system("start https://www.ox.ac.uk/admissions/undergraduate/applying-to-oxford");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain20;
            }

            break;
        case '2':
            cout << endl;

        showagain21:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY COLLEGE LONDON * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ucl.ac.uk/students/fees-and-funding");
                break;
            case '2':
                system("start https://www.ucl.ac.uk/students/immigration-and-visas");
                break;
            case '3':
                system("start https://www.ucl.ac.uk/prospective-students/graduate/taught-degrees/applying-graduate-taught-study-ucl");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain21;
            }

            break;

        case '3':
            cout << endl;

        showagain22:
            cout << "SEE MORE DEATILS ABOUT * NEWCASTLE UNIVERSITY * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.ncl.ac.uk/undergraduate/fees-funding/");
                break;
            case '2':
                system("start https://www.ncl.ac.uk/international/visa/");
                break;
            case '3':
                system("start https://www.ncl.ac.uk/undergraduate/applications-offers/");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain22;
            }

            break;

        case '4':
            cout << endl;

        showagain23:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF CAMBRIDGE * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.internationalstudents.cam.ac.uk/applying/fees-and-financial-support");
                break;
            case '2':
                system("start https://www.internationalstudents.cam.ac.uk/immigration");
                break;
            case '3':
                system("start https://www.internationalstudents.cam.ac.uk/applying");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain23;
            }

            break;

        case '5':
            cout << endl;

        showagain24:
            cout << "SEE MORE DEATILS ABOUT * UNIVERSITY OF GLASGOW * " << endl;
            cout << "_____________________________________" << endl;
            cout << endl;
            cout << "\t\t 1.FEE STRUCTURE " << endl;
            cout << "\t\t 2.VISA AND IMMIGRATION " << endl;
            cout << "\t\t 3.APPLY FOR ADDMISSION" << endl;
            cout << endl;
            cout << "\t\t =======================" << endl;
            cout << "\t\t 0.GO BACK TO MAIN MENU" << endl;
            cout << "\t\t =======================" << endl;
            cout << endl;
            cout << "CHOOSE FROM THESE TO ENTER THE WEBSITE : ";

            // NESTED SWITCH STATEMENT

            cin >> detailsEnter;
            switch (detailsEnter) {
            case '1':
                system("start https://www.gla.ac.uk/scholarships/");
                break;
            case '2':
                system("https://www.gla.ac.uk/international/support/before/studentvisa/");
                break;
            case '3':
                system("start https://www.gla.ac.uk/undergraduate/entryrequirements/policy/");
                break;
            case '0':
                main();
                break;

            default:
                cout << "Please Enter the Correct Number :(" << endl;
            }

            // Going back to a specific line which is shown as showagain this statement will show the list again to the user

            if (detailsEnter == 1 || 2 || 3) {
                break;
            }
            else {
                goto showagain24;
            }

            break;

        case '0':
            main();
            break;

        default:
            cout << "Please Enter the Correct Number :(" << endl;
        };


        cout << "If you want to know more about the UK's University Press 1 Otherwise Press any key to continue:";
        int ukuni;
        cin >> ukuni;
        if (ukuni == 1)
        {
            system("start https://www.thecompleteuniversityguide.co.uk/league-tables/rankings");
        }


        //THE OPTION TO ASK THE USER IF HE WANTS TO GO BACK TO THE MAIN FUNCTION OR NOT IS STORED IN ENT2() FUNCTION.
        cout << endl;
        ent_2();

    }

    // For returning to the Main Menu

    else if (select_uni == 0) {
        cout << "Returning to Main Menu\n";
        main();
    }

    // IF THE USER DOESNT ENTER THE CORRECT OPTION THIS WILL RETURN THE FUNCTION TO COURSE MENU
    else {
        cout << "Please enter the number from 1-5" << endl;
        course();
    }


}

// FUNCTION FOR UNIVERSITIES BY GRADES

void grades() {
    system("CLS"); // To clear the previous screen

    // Menu for Grades

    cout << "\t\t  _____________________________________________________\n"
        "\t\t |                                                     | \n"
        "\t\t |       Find University By Entering Your Grades       | \n"
        "\t\t |                  -------------                      | \n"
        "\t\t |            Please Enter Your Marks Below            | \n"
        "\t\t |                                                     | \n"
        "\t\t |              =======================                | \n"
        "\t\t |              0. GO BACK TO MAIN MENU                | \n"
        "\t\t |_____________________________________________________| \n"
        << endl;
    cout << "Press 1 to Continue --->> ";
    cin >> m_k;
    // if choice is 0 it will return otherwise it will continue
    if (m_k == '0') {
        main();
    };
    cout << endl;
    // ASKING FOR USERS MARKS

    cout << "\t\t Please Enter your O levels Marks in % : ";
    cin >> o_levels;
    cout << "\t\t Please Enter your A levels Marks in % : ";
    cin >> a_levels;
    cout << "\t\t Please Enter your IELTS Bands (1-9) : ";
    cin >> ielts_score;

    // IF THE USER ENTER WRONG MARKS THE FUNCTION WILL ASK HIM AGAIN TO ENTER THE CORRECT MARKS

    if (ielts_score > 9) {
        cout << "_______________________________" << endl;
        cout << "You Enter The Wrong Band Score!! :( " << endl;
        cout << "Please Enter Your Band Score Of IELTS again: ";
        cin >> ielts_score;
    }
    else;

    // THIS WILL CONVERT THE IELTS BANDS TO PERCENTAGE

    ielts_result = (ielts_score * 100) / 9;

    // THIS WILL MAKE THE AVERAGE OF ALL OF THE USERS MARKS/GRADES

    avg_1 = (o_levels + a_levels + ielts_result) / 3;
    cout << endl;

    // This will show the Average Marks

    cout << "\t\t\t\t ******** AVG *******" << endl;
    cout << "\t\t\t\t Your Average Marks = " << avg_1 << endl;

    // CREATING A STRING ARRAY SO ALLL THE UNIVERSITIE DATA CAN BE STORED IN THIS

    string uni[150] = { "Univeristy of Oxford","University of Cambridge","London School of Economics","University of St Andrews","Imperial College London","Durhaham University","Loughborough University","UCL (University College London)","University of Warwick","University of Bath","Lancaster University","The University of Edinburgh","University of Manchester","University of Exeter","University of Southampton","University of Glasgow","University of Bristol","University of York","University of Birmingham","University of Leeds","King's College London","University of East Anglia UEA","Heriot-Watt University","University of Nottingham","Cardiff University","University of Sheffield","University of Essex","University of Dundee","Swansea University","University of Strathclyde","University of Liverpool","Royal Holloway","Harper Adams University","Queen's University Belfast","University of Surrey","University of Reading","Newcastle University","University of Stirling","University of Aberdeen","University of Leicester","University of Sussex","Queen Mary University of London","University of the Arts London","Ulster University","Nottingham Trent University","University of Lincoln","Aston University", "Birmingham City University","SOAS University of London","Northumbria University","Newcastle University","University of Kent","Oxford Brookes University","Coventry University","University of Huddersfield","City, University of London","Bristol, USW","Manchester Metropolitan University","Arts University Bournemouth","Keele University","Aberystwyth University","Edge Hill University","St George's, University of London","Brunel University London","Cardiff Metropolitan University","Goldsmiths, University of London","Robert Gordon University","Bangor University","Sheffield Hallam University","Bournemouth University","University of Plymouth","University of Chichester","University of Hull","University of Chester","Liverpool John Moores University","University of Portsmouth","University for the Creative Arts","Liverpool Hope University","Edinburgh Napier University","Glasgow Caledonian University","University of Roehampton","University of Hertfordshire","University of Brighton","Birmingham City University","University of Salford","Norwich University of the Arts","University of Bradford","Kingston University","University of Worcester","Queen Margaret University, Edinburgh","University of Central Lancashire","University of Northampton","University of South Wales","University of Sunderland","University of Greenwich","University of West London","Teesside University", "Middlesbrough","University of Derby","Staffordshire University","University of Gloucestershire","Falmouth University","University of Cumbria","De Montfort University","Buckinghamshire New University","University of Wales Trinity","University of the West of Scotland","Bath Spa University","University of Winchester","Middlesex University","London South Bank University","Abertay University","Leeds Beckett University","York St John University","St Mary's University, Twickenham","University of Bolton","University of Westminster, London","Royal Agricultural University","Plymouth Marjon University","Anglia Ruskin University","Canterbury Christ Church University","London Metropolitan University","Solent University (Southampton)","Newman University, Birmingham","Bishop Grosseteste University","University of Buckingham","University of Wolverhampton","Leeds Trinity University","University of Suffolk","University of East London","Ravensbourne University London","University of Bedfordshire"
    };
    // This will show the result of universities using for loop and gettinf data from array and printing it in a line
    if (avg_1 >= 80) {

        cout << endl;
        cout << "   \t\t         ::: CONGRATULATIONS :::               " << endl;
        cout << "\t\t THE LIST OF UNIVERSITIES YOU CAN GET ADMISSION IN :)" << endl;
        for (int i = 0; i < 49; i++) {
            cout << endl;
            cout << "\t\t | " << i << "-   " << uni[i] << " \n";
        }
        cout << endl;
        cout << "\t\t =======================" << endl;
        cout << "\t\t 0. TO RE-ENTER MARKS " << endl;
        cout << "\t\t =======================" << endl;
        cout << endl;
        system("pause"); // system pause prints press any key to continue and delay the program
        cout << "Press 1 to continue and 0 to re-enter marks.. ---> ";
        cin >> choice_;
        cout << endl;
        cout << "IF YOU WISH SEE THE FULL WEBSITE WHERE YOU CAN GET MORE INFO PRESS 1 or PRESS ANY NUMBER TO CONTINUE --> ";
        cin >> choice_;
        if (choice_ == 0) {
            grades(); // re entering marks going back to void grades()
        }
        // this will open the url of main website
        else if (choice_ == 1)
        {
            system("start https://www.thecompleteuniversityguide.co.uk/league-tables/rankings");
        }
        ent();

    }
    // This will show the result of universities using for loop and gettinf data from array and printing it in a line
    else if (avg_1 < 79 && avg_1 >= 65) {
        cout << endl;
        cout << "   \t\t         ::: CONGRATULATIONS :::               " << endl;
        cout << "\t\t THE LIST OF UNIVERSITIES YOU CAN GET ADMISSION IN :)" << endl;
        for (int i = 50; i < 100; i++) {
            cout << endl;
            cout << "\t\t | " << i << "-   " << uni[i] << " \n";
        }
        cout << endl;
        // opening url
        cout << "\t\t =======================" << endl;
        cout << "\t\t 0. TO RE-ENTER MARKS " << endl;
        cout << "\t\t =======================" << endl;
        cout << endl;
        system("pause"); // THIS WILL PRINT PRESS ANY KEY TO CONTINUE... AND ITS ALSO DELAYS THE PROGRAM IT USES THE #INCLUDE <CSTDLIB> LIBRARY
        cout << "Press 1 to continue and 0 to re-enter marks.. ---> ";
        cin >> choice_;
        cout << endl;
        cout << "IF YOU WISH SEE THE FULL WEBSITE WHERE YOU CAN GET MORE INFO PRESS 1 or PRESS ANY NUMBER TO CONTINUE --> ";
        cin >> choice_;
        if (choice_ == 0) {
            grades();
        }
        else if (choice_ == 1)
        {
            system("start https://www.thecompleteuniversityguide.co.uk/league-tables/rankings");
        }
        ent(); // THIS WILL TO A SPECIFIC VOID FUNCTION

    }
    // This will show the result of universities using for loop and gettinf data from array and printing it in a line
    else if (avg_1 < 65 && avg_1 >= 55)
        // if the average is between 55 to 65
    {
        cout << endl;
        cout << "   \t\t         ::: CONGRATULATIONS :::               " << endl;
        cout << "\t\t THE LIST OF UNIVERSITIES YOU CAN GET ADMISSION IN :)" << endl;
        for (int i = 100; i < 132; i++) // HERE I HAVE USED FOR LOOP TO PRINT ALL THE NUMBERS OF ARRAY WHICH ARE STORED IN THE ARRAY
        {
            cout << endl;
            cout << "\t\t | " << i << "-   " << uni[i] << " \n";
        }
        cout << endl;
        cout << "\t\t =======================" << endl;
        cout << "\t\t 0. TO RE-ENTER MARKS " << endl;
        cout << "\t\t =======================" << endl;
        cout << endl;
        system("pause");
        cin >> choice_;
        cout << endl;
        // opening url
        cout << "IF YOU WISH SEE THE FULL WEBSITE WHERE YOU CAN GET MORE INFO PRESS 1 or PRESS ANY NUMBER TO CONTINUE --> ";
        cin >> choice_;
        if (choice_ == 0) {
            grades();
        }
        else if (choice_ == 1)
        {
            system("start https://www.thecompleteuniversityguide.co.uk/league-tables/rankings");
        }
        ent();

    }

    else {
        cout << "Sorry :( You cant get admission in any UKs Univerity" << endl;
        cout << "You Will have to do Pathway Program " << endl;
        cout << "TO FIND INFO ABOUT PATHWAY PROGRAMS PRESS 1 --->";
        cin >> ch_2;
        if (ch_2 == 1) {
            system("start https://www.click-courses.com/uk/ ");
        }
        ent();

    };
}

// FUNCTION TO ASK THE RE-ASK THE USER

void ent() {

    cout << "\t\t ===================================" << endl;
    cout << "\t\t DO YOU WANT TO GO BACK TO MAIN MENU ?" << endl;
    cout << "\t\t ===================================" << endl;
    cout << "Y/N : ";
    cin >> opt_2;
    if (opt_2 == "Yes" || opt_2 == "YES" || opt_2 == "yes" || opt_2 == "Y" || opt_2 == "y" || opt_2 == "1") {
        main();
    }
    if (opt_2 == "No" || opt_2 == "NO" || opt_2 == "no" || opt_2 == "N" || opt_2 == "n" || opt_2 == "0") {
        cout << endl;
        cout << "/t/t **THANK YOU FOR USING OUR SERVIVES**" << endl;
        return;
    }
}

// FUNCTION TO ASK THE USER IF HE WANTS TO GO TO THE MAIN MENU OR NOT

void ent_2() {
    cout << endl;
    cout << "Do you want to see any other courses? Yes/No" << endl;
    cin >> ent_opt;
    if (ent_opt == "yes" || ent_opt == "YES" || ent_opt == "Yes" || ent_opt == "Y" || ent_opt == "y" || ent_opt == "1") {
        return course();
    }
    else
        cout << "Do You Want To Return To The Main MENU? Y/N :) " << endl;
    cin >> opt_2;
    if (opt_2 == "Yes" || opt_2 == "YES" || opt_2 == "yes" || opt_2 == "Y" || opt_2 == "y" || opt_2 == "1") {
        main();
    }
    if (opt_2 == "No" || opt_2 == "NO" || opt_2 == "no" || opt_2 == "N" || opt_2 == "n" || opt_2 == "0") {
        cout << endl;
        cout << "**THANK YOU FOR USING OUR SERVIVES**" << endl;
        return;
    }

}

void budget() {
    system("CLS"); // To clear the previous screen
    cout << endl;
    cout << "\t\t  _____________________________________________________\n"
        "\t\t |                                                     | \n"
        "\t\t |       Find University By Entering Your Budget       | \n"
        "\t\t |                  -------------                      | \n"
        "\t\t |                                                     | \n"
        "\t\t |              =======================                | \n"
        "\t\t |              0. GO BACK TO MAIN MENU                | \n"
        "\t\t |_____________________________________________________| \n"
        << endl;
    cout << "Press 1 To Continue --->> ";
    cin >> m_k;
    // if choice is 0 it will return otherwise it will continue
    if (m_k == '0') {
        main();
    };
    cout << endl;
    cout << "Do you have in mind how much budget do you have? Y/N :: ";
    cin >> bdg_1;
    if (bdg_1 == "No" || bdg_1 == "NO" || bdg_1 == "no" || bdg_1 == "N" || bdg_1 == "n" || bdg_1 == "0") {
        cout << endl;
        cout << "\t\t WE WILL BE MORE THAN HAPPY TO PROVIDE OUR SERVICES :)" << endl;
        cout << endl;
        cout << "Do You Want To See The Monthly Expenses? Y/N";
        cin >> mon_1;
        if (mon_1 == "yes" || mon_1 == "YES" || mon_1 == "Yes" || mon_1 == "Y" || mon_1 == "y" || mon_1 == "1") {
            // THIS WILL SHOW SOME DATA ABOUT MONTHLY EXPENSES
            cout << "----------------------------------------------------------------------------------" << endl;
            cout << "1: A weekly food shop will likely cost you about £30/$42, and a meal in a pub or restaurant can be about £12/$17" << endl;
            cout << "----------------------------------------------------------------------------------" << endl;
            cout << "2: Depending on your course, youíll likely spend at least £30 a month on books and other course materials" << endl;
            cout << "----------------------------------------------------------------------------------" << endl;
            cout << "3: Your mobile phone bill is likely to be at least £15/$22 a month" << endl;
            cout << "----------------------------------------------------------------------------------" << endl;
            cout << "4: Your monthly rent is likely to be atleast £250 a month" << endl;
            cout << "----------------------------------------------------------------------------------" << endl;
            cout << "\t\t *** Overall, We will recommend you to have £ 700/800 outside London and in London you should have a budget of £1000/1100 a month ***" << endl;
            ent();
        }
        else {
            cout << "Almost All The Universities in The UK have Fees More Than 10000£ Pounds But In Some You Can Get Scholarships" << endl;
            cout << endl;
            cout << "If You have Something In Mind Then Enter Your Budget Below :)" << endl;
            cout << "\t\t *****************************************" << endl;
            cout << "\t\t MINIMUM FEE Per ANNUM IS 10000 pounds" << endl;
            cout << "\t\t ****************************************" << endl;
            cout << "Enter Your Budget in Pounds(£) per Annum: ";
            cin >> amount_;
            budget2();

        }


    }

    if (bdg_1 == "yes" || bdg_1 == "YES" || bdg_1 == "Yes" || bdg_1 == "Y" || bdg_1 == "y" || bdg_1 == "1") {
        cout << "\t\t *****************************************" << endl;
        cout << "\t\t MINIMUM FEE Per ANNUM IS 10000 pounds" << endl;
        cout << "\t\t ****************************************" << endl;
        cout << endl;
        cout << "Enter Your Budget in Pounds(£) per Annum :: ";
        cin >> amount_;
        budget2();

    }

}
void budget2() {
    // AGAIN STORING ALL THE NAME OF THE UNIVERSITIES IN AN ARRAY AND THEN PRINTING USING IF ELSE AND USING FOR LOOP#
    
    string uni[150] = { "Univeristy of Oxford","University of Cambridge","London School of Economics","University of St Andrews","Imperial College London","Durhaham University","Loughborough University","UCL (University College London)","University of Warwick","University of Bath","Lancaster University","The University of Edinburgh","University of Manchester","University of Exeter","University of Southampton","University of Glasgow","University of Bristol","University of York","University of Birmingham","University of Leeds","King's College London","University of East Anglia UEA","Heriot-Watt University","University of Nottingham","Cardiff University","University of Sheffield","University of Essex","University of Dundee","Swansea University","University of Strathclyde","University of Liverpool","Royal Holloway","Harper Adams University","Queen's University Belfast","University of Surrey","University of Reading","Newcastle University","University of Stirling","University of Aberdeen","University of Leicester","University of Sussex","Queen Mary University of London","University of the Arts London","Ulster University","Nottingham Trent University","University of Lincoln","Aston University", "Birmingham City University","SOAS University of London","Northumbria University","Newcastle University","University of Kent","Oxford Brookes University","Coventry University","University of Huddersfield","City, University of London","Bristol, USW","Manchester Metropolitan University","Arts University Bournemouth","Keele University","Aberystwyth University","Edge Hill University","St George's, University of London","Brunel University London","Cardiff Metropolitan University","Goldsmiths, University of London","Robert Gordon University","Bangor University","Sheffield Hallam University","Bournemouth University","University of Plymouth","University of Chichester","University of Hull","University of Chester","Liverpool John Moores University","University of Portsmouth","University for the Creative Arts","Liverpool Hope University","Edinburgh Napier University","Glasgow Caledonian University","University of Roehampton","University of Hertfordshire","University of Brighton","Birmingham City University","University of Salford","Norwich University of the Arts","University of Bradford","Kingston University","University of Worcester","Queen Margaret University, Edinburgh","University of Central Lancashire","University of Northampton","University of South Wales","University of Sunderland","University of Greenwich","University of West London","Teesside University", "Middlesbrough","University of Derby","Staffordshire University","University of Gloucestershire","Falmouth University","University of Cumbria","De Montfort University","Buckinghamshire New University","University of Wales Trinity","University of the West of Scotland","Bath Spa University","University of Winchester","Middlesex University","London South Bank University","Abertay University","Leeds Beckett University","York St John University","St Mary's University, Twickenham","University of Bolton","University of Westminster, London","Royal Agricultural University","Plymouth Marjon University","Anglia Ruskin University","Canterbury Christ Church University","London Metropolitan University","Solent University (Southampton)","Newman University, Birmingham","Bishop Grosseteste University","University of Buckingham","University of Wolverhampton","Leeds Trinity University","University of Suffolk","University of East London","Ravensbourne University London","University of Bedfordshire"
    };
   

    cout << "\t\t === With the Budget you have you can Apply in these Universities ===" << endl;
    cout << endl;
    if (amount_ > 20000) {
        cout << "The Universities you can admission in are: ";
        cout << endl;
        for (int i = 0; i < 34; i++) {
            cout << endl;
            cout << "\t\t | " << i << "-   " << uni[i] << " \n";
        }
        cout << endl;
        cout << "Do You Want to Apply In Any of These ? :: ";
        cin >> apl;
        if (apl == "yes" || apl == "YES" || apl == "Yes" || apl == "Y" || apl == "y" || apl == "1"){
            system ("start https://www.ucas.com");
        }
        else {
            ent();
        }
    }
    
    else if (amount_ >= 10000 && amount_ <= 20000) {
        cout << "The Universities you can admission in are: ";
        cout << endl;
        for (int i = 35; i < 132; i++) {
            cout << endl;
            cout << "\t\t | " << i << "-   " << uni[i] << " \n";
            cout << endl;
            cout << "Do You Want to Apply In Any of These ? :: ";
            cin >> apl;
            if (apl == "yes" || apl == "YES" || apl == "Yes" || apl == "Y" || apl == "y" || apl == "1"){
                system ("start https://www.ucas.com");
            }
            else {
                ent();
            }
        }
    }
    else if (amount_ <= 10000) {
        cout << "Sorry :( You cant apply in any universities with this budget " << endl;
        cout << "But We Can Provide You With Some Information About Scholarships " << endl;
        system("pause"); // this is use to delay the function
        cout << "Do you want to visit the webiste to know more info aboht scholarships ? --> ";
        cin >> sch_ship;
        if (sch_ship == "yes" || sch_ship == "YES" || sch_ship == "Yes" || sch_ship == "Y" || sch_ship == "y" || sch_ship == "1"){
        system("start https://study-uk.britishcouncil.org/scholarships");
        }
    }
    
};

void overall() {

    // IN THE FUNCTION IT WILL READ THE TEXT FILE AND THEN IT WILL PRINT THE BEST OVERALL UNIVERSITIES IN THE UK

    cout << endl;
    {   string line;
    string file_name  = "Russel";
    ifstream russelfile("Russel.txt");
    if (russelfile.is_open())
    {
        while (getline(russelfile, line))
        {
            cout << line <<  "\n";
        }
        russelfile.close();
    }
    else cout << "Unable to open file";
    }
    cout << "Do you want to visit the website to know more info? Y/N ---> ";
    cin >> w_e_b;
    if (w_e_b == "yes" || w_e_b == "YES" || w_e_b == "Yes" || w_e_b == "Y" || w_e_b == "y" || w_e_b == "1") {
        system("start https://www.thecompleteuniversityguide.co.uk/league-tables/rankings/russell-group");
    }

    else
        main();

}
void convertor() {

    system("CLS"); // To clear the previous screen
    // this is a convertor for some countries if the user doesnt have any idea about pounds in some countries he can convert the money and then it will show the universities accordnig to the budget
    cout << "\t\t  ___________________________________________________\n"
        "\t\t |                                                   | \n"
        "\t\t |       The Currency You Can Convert To Pounds      | \n"
        "\t\t |                                                   | \n"
        "\t\t |           1: Pakistani Ruppee/PKR                 | \n"
        "\t\t |           2: Indian Ruppee/INR                    | \n"
        "\t\t |           3: Euros                                | \n"
        "\t\t |           4: Dollars                              | \n"
        "\t\t |___________________________________________________| \n"
        << endl;
    cout << "\t\t\t     ======================= " << endl;
    cout << "\t\t\t     0.GO BACK TO MAIN MENU " << endl;
    cout << "\t\t\t     ======================= " << endl;
    cout << endl;
    cout << "Which Currency Would You Like to Change to Pounds? And Press 0 to go back ----> ";
    cin >> currency_to_con;
    if (currency_to_con == "PKR" || currency_to_con == "pkr" || currency_to_con == "1") {
        cout << endl;
        cout << "Enter The Amount You Have in PKR: ";
        cin >> amn_of_money;
        cout << "_____________________________________________" << endl;
        cout << endl;
        cout << "\t If tha rate of pound is 240.12 in Pakistan\n";
        amount_ = amn_of_money * 0.0042;
        cout << "\t Then In Pounds(£) The Amount will be = " << amount_ << endl;
        cout << "_____________________________________________" << endl;
        cout << amn_of_money << " PKR = " << amount_ << "£" << endl;
        cout << "_____________________________________________" << endl;
        
    }
    if (currency_to_con == "INR" || currency_to_con == "inr" || currency_to_con == "2") {
        cout << "Enter The Amount You Have In INR: ";
        cin >> amn_of_money;
        cout << "_____________________________________________" << endl;
        cout << endl;
        cout << "\t If tha rate of pound is 99.64 in India\n";
        amount_ = amn_of_money * 0.010;
        cout << "\t Then In Pounds(£) The Amount will be = " << amount_ << endl;
        cout << "_____________________________________________" << endl;
        cout << amn_of_money << " INR = " << amount_ << "£" << endl;
        cout << "_____________________________________________" << endl;
       
    }
    if (currency_to_con == "euro" || currency_to_con == "EURO" || currency_to_con == "3") {
        cout << "Enter The Amount You Have in Euros: ";
        cin >> amn_of_money;
        cout << "_____________________________________________" << endl;
        cout << endl;
        cout << "\t If tha rate of pound is 1.21 Euro \n";
        amount_ = amn_of_money * 0.83;
        cout << "\t Then In Pounds(£) The Amount will be = " << amount_ << endl;
        cout << "_____________________________________________" << endl;
        cout << amn_of_money << " Euros = " << amount_ << "£" << endl;
        cout << "_____________________________________________" << endl;
        
    }
    if (currency_to_con == "dollar" || currency_to_con == "Dollar" || currency_to_con == "$" || currency_to_con == "4") {
        cout << "Enter The Amount You Have in Dollars: ";
        cin >> amn_of_money;
        cout << "_____________________________________________" << endl;
        cout << endl;
        cout << "\t If tha rate of pound is 1.30 United States Dollar \n";
        amount_ = amn_of_money * 0.77;
        cout << "\t Then In Pounds(£) The Amount will be = " << amount_ << endl;
        cout << "_____________________________________________" << endl;
        cout << amn_of_money << " Dollars = " << amount_ << "£" << endl;
        cout << "_____________________________________________" << endl;
    
        
    }
    if (currency_to_con == "0") {
        main();
    }
    budget2();
}

void summary() {
    int s1;
    cout << "Do You Want the Summary (Press 1 For Yes)";
    cin >> s1;
    if (s1 == 1) {


    }

    ofstream summary;
    summary.open("summary.txt");
    cout << "Summary" << endl;
    summary << "Summary" << endl;
}








