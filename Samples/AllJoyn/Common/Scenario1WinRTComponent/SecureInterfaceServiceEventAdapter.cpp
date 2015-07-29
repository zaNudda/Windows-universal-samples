//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************
//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#include "pch.h"

using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace com::microsoft::Samples::SecureInterface;

// Note: Unlike an Interface implementation, which provides a single handler for each member, the event
// model allows for 0 or more listeners to be registered. The EventAdapter implementation deals with this
// difference by implementing a last-writer-wins policy. The lack of any return value (i.e., 0 listeners)
// is handled by returning a null result.

// Methods
IAsyncOperation<SecureInterfaceConcatenateResult^>^ SecureInterfaceServiceEventAdapter::ConcatenateAsync(_In_ AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberInStr1, _In_ Platform::String^ interfaceMemberInStr2)
{
    auto args = ref new SecureInterfaceConcatenateCalledEventArgs(info, interfaceMemberInStr1, interfaceMemberInStr2);
    AllJoynHelpers::DispatchEvent([=]() {
        ConcatenateCalled(this, args);
    });
    return SecureInterfaceConcatenateCalledEventArgs::GetResultAsync(args);
}

// Property Reads
IAsyncOperation<SecureInterfaceGetIsUpperCaseEnabledResult^>^ SecureInterfaceServiceEventAdapter::GetIsUpperCaseEnabledAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new SecureInterfaceGetIsUpperCaseEnabledRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetIsUpperCaseEnabledRequested(this, args);
    });
    return SecureInterfaceGetIsUpperCaseEnabledRequestedEventArgs::GetResultAsync(args);
}

// Property Writes
IAsyncOperation<SecureInterfaceSetIsUpperCaseEnabledResult^>^ SecureInterfaceServiceEventAdapter::SetIsUpperCaseEnabledAsync(_In_ AllJoynMessageInfo^ info, _In_ bool value)
{
    auto args = ref new SecureInterfaceSetIsUpperCaseEnabledRequestedEventArgs(info, value);
    AllJoynHelpers::DispatchEvent([=]() {
        SetIsUpperCaseEnabledRequested(this, args);
    });
    return SecureInterfaceSetIsUpperCaseEnabledRequestedEventArgs::GetResultAsync(args);
}

