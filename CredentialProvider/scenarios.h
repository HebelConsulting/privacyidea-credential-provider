/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
**
** Copyright	2012 Dominik Pretzsch
**				2017 NetKnights GmbH
**
** Author		Dominik Pretzsch
**				Nils Behlen
**
**    Licensed under the Apache License, Version 2.0 (the "License");
**    you may not use this file except in compliance with the License.
**    You may obtain a copy of the License at
**
**        http://www.apache.org/licenses/LICENSE-2.0
**
**    Unless required by applicable law or agreed to in writing, software
**    distributed under the License is distributed on an "AS IS" BASIS,
**    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**    See the License for the specific language governing permissions and
**    limitations under the License.
**
** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "new_unlock_scenario.h"
#include "scenario_unlock_logon.h"
#include "scenario_change_password.h"
#include "scenario_credui.h"

static const CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR* s_rgCredProvFieldDescriptorsFor[] =
{
	NULL,												// CPUS_INVALID = 0x0000,
	s_rgScenarioPushCredProvFieldDescriptors,			// CPUS_LOGON,
	s_rgScenarioPushCredProvFieldDescriptors,			// CPUS_UNLOCK_WORKSTATION,
	s_rgScenarioChangePasswordCredProvFieldDescriptors,	// CPUS_CHANGE_PASSWORD,
	s_rgScenarioCredUiCredProvFieldDescriptors,			// CPUS_CREDUI,
	NULL												// CPUS_PLAP
};

static const FIELD_INITIALIZOR* s_rgCredProvFieldInitializorsFor[] =
{
	NULL,											// CPUS_INVALID = 0x0000,
	s_rgScenarioPushFieldInitializors,				// CPUS_LOGON,
	s_rgScenarioPushFieldInitializors,				// CPUS_UNLOCK_WORKSTATION,
	s_rgScenarioChangePasswordFieldInitializors,	// CPUS_CHANGE_PASSWORD,
	s_rgScenarioCredUiFieldInitializors,			// CPUS_CREDUI,
	NULL											// CPUS_PLAP
};

static const unsigned int s_rgCredProvNumFieldsFor[] =
{
	0,					// CPUS_INVALID = 0x0000,
	LPFI_NUM_FIELDS,	// CPUS_LOGON,
	LPFI_NUM_FIELDS,	// CPUS_UNLOCK_WORKSTATION,
	CPFI_NUM_FIELDS,	// CPUS_CHANGE_PASSWORD,
	CFI_NUM_FIELDS,		// CPUS_CREDUI,
	0					// CPUS_PLAP
};