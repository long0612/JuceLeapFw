/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "JuceDemoHeader.h"
#include "MainWindow.h"
#include "Leap.h"
#include <cctype>

//==============================================================================
class JuceLeapFWApplication  : public JUCEApplication
{
public:
    //==============================================================================
    JuceLeapFWApplication() {}

    const String getApplicationName()       { return ProjectInfo::projectName; }
    const String getApplicationVersion()    { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed()       { return true; }

    //==============================================================================
    void initialise (const String& /*commandLine*/) override
    {
        Desktop::getInstance().setOrientationsEnabled (Desktop::allOrientations);

        // Do your application's initialisation code here..
        mainWindow = new MainAppWindow();
    }

    void shutdown() override
    {
        // Do your application's shutdown code here..
        mainWindow = nullptr;
    }

    //==============================================================================
    void systemRequestedQuit() override
    {
        // This is called when the app is being asked to quit: you can ignore this
        // request and let the app carry on running, or call quit() to allow the app to close.
        quit();
    }

    void anotherInstanceStarted (const String& /*commandLine*/) override
    {
    }

private:
    ScopedPointer<MainAppWindow>  mainWindow; 
};

//==============================================================================
// This macro generates the main() routine that launches the app.
START_JUCE_APPLICATION (JuceLeapFWApplication)
