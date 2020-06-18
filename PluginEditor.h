/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Gainslider02AudioProcessorEditor  : public AudioProcessorEditor,
                                          public Slider::Listener

{
public:
    Gainslider02AudioProcessorEditor (Gainslider02AudioProcessor&);
    ~Gainslider02AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    void sliderValueChanged(Slider* slider) override;//override is recalling the pure virtual function that we are changing. sliderValueChanged is a pure virtual function
   
    
private: 

    Slider mGainSlider; // 'm' in front of member variables(GainSlider is a member variable -optional) it is a new object
    
    Gainslider02AudioProcessor& processor; //Reference to the processor

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Gainslider02AudioProcessorEditor)
};
