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

#pragma once

#include "pch.h"
#include "Scenario5.g.h"
#include "MainPage.xaml.h"

namespace SDKTemplate
{
    namespace DatagramSocketSample
    {
        /// <summary>
        /// An empty page that can be used on its own or navigated to within a Frame.
        /// </summary>
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class Scenario5 sealed
        {
        public:
            Scenario5();

        protected:
            virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;
            virtual void OnNavigatingFrom(Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs^ e) override;

        private:
            MainPage^ rootPage;
            Windows::Networking::Sockets::DatagramSocket^  listenerSocket;

            void CloseListenerSocket();

            void SetupMulticastScenarioUI();
            void SetupBroadcastScenarioUI();

            void MulticastRadioButton_Checked(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void MulticastRadioButton_Unchecked(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

            void StartListener_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void SendMessage_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void CloseListener_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

            void MessageReceived(
                Windows::Networking::Sockets::DatagramSocket^ socket,
                Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs^ eventArguments);
            void NotifyUserFromAsyncThread(Platform::String^ message, NotifyType type);
        };
    }
}
