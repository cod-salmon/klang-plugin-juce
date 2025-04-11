/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SimpleGainAudioProcessorEditor::SimpleGainAudioProcessorEditor (SimpleGainAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p), 
    gainSliderAttachment (p.apvts, "gain", gainSlider)
{
    gainSlider.setSliderStyle (juce::Slider::SliderStyle::LinearVertical);
    gainSlider.setTextBoxStyle (juce::Slider::TextBoxBelow, true, 200, 30);
    addAndMakeVisible (gainSlider);
    
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

SimpleGainAudioProcessorEditor::~SimpleGainAudioProcessorEditor()
{
}

//==============================================================================
void SimpleGainAudioProcessorEditor::paint (juce::Graphics& g)
{
    // Fill the whole background will black color
    g.fillAll(juce::Colours::black);
}

void SimpleGainAudioProcessorEditor::resized()
{
    // Set the bounds of the gain's slider to the window bounds
    gainSlider.setBounds(getLocalBounds());
}
