//============================================================================
// Name        : CrossWeb.cpp
// Author      : Dipanjan Nag
// Version     :
// Copyright   : Free code
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WText>
#include "LogInWidget.h"
#include "StockMarket.h"
using namespace std;
class HelloApplication : public Wt::WApplication
{
public:
    HelloApplication(const Wt::WEnvironment& env);

private:
    Wt::WLineEdit *username_;
    Wt::WLineEdit *password_;
    Wt::WText *greeting_;
    void try_logIn();
    void greet();
};
HelloApplication::HelloApplication(const Wt::WEnvironment& env)
    : Wt::WApplication(env)
{
    //setTitle("Log In");

//    root()->addWidget(new Wt::WText("Username :  "));
//    username_ = new Wt::WLineEdit(root());
//    root()->addWidget(new Wt::WBreak());
//    root()->addWidget(new Wt::WBreak());
//    root()->addWidget(new Wt::WText("Password : "));
//    password_ = new Wt::WLineEdit(root());
//    root()->addWidget(new Wt::WBreak());
//    root()->addWidget(new Wt::WBreak());
//    Wt::WPushButton *button_log_in = new Wt::WPushButton("LogIn", root());
//    Wt::WPushButton *button_sign_up = new Wt::WPushButton("Sign up", root());
//    root()->addWidget(new Wt::WBreak());
//    root()->addWidget(new Wt::WBreak());
//    root()->addWidget(new Wt::WBreak());
//    greeting_ = new Wt::WText(root());
//    button_log_in->clicked().connect(this, &HelloApplication::greet);

}

void HelloApplication::greet()
{

    greeting_->setText("Hello there, " + username_->text());
}

Wt::WApplication *createApplication(const Wt::WEnvironment& env)
{
	//auto t = new HelloApplication(env);

	StockMarket *app = new StockMarket(env);
	app->setTitle("Fire Nation Stock Market");
	new LogInWidget("Fire Nation Stock Market", app->root());
	return app;
}

void InternalPathHandler(const std::string &internalPath)
{
	if(internalPath == "login")
	{
	}
	else{

	}
}
int main(int argc, char **argv)
{
    return Wt::WRun(argc, argv, &createApplication);
}
