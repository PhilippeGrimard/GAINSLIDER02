/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Gainslider02AudioProcessorEditor::Gainslider02AudioProcessorEditor (Gainslider02AudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    
    mGainSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
        //LinearVertical is one of the slider styles within SliderStyle. SiderStyle is within the Slider class
    mGainSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 50, 20);
        //This is where the user will be able to 
    mGainSlider.setRange(0.0f, 1.0f, 0.01f);
        // 0.0f is minimal value of a float value, 1.0f is maximum value of a float value, 0.01f is the incremental increase in value of a float value
    mGainSlider.setValue(0.5f);
        //0.5f is an arbitrsry initial value found through the recommendations of other individuals
    addAndMakeVisible(mGainSlider);
    // (mGainSlider is chiild component of the audio processor editor (Parent)
    mGainSlider.addListener (this); //(the listener will listen to the plugineditor.cpp for changes set from the user )
    
    
    
    setSize (200, 300);    

    
}

Gainslider02AudioProcessorEditor::~Gainslider02AudioProcessorEditor()
{
}

//==============================================================================
void Gainslider02AudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (Colours::black);
}

void Gainslider02AudioProcessorEditor::resized()
{
    mGainSlider.setBounds(getWidth()/2-50, getHeight()/2-75, 100, 150);
}

void Gainslider02AudioProcessorEditor::sliderValueChanged(Slider* slider)
{
    if(slider== &mGainSlider)
    {
        processor.mGain=mGainSlider.getValue();
    }
}

