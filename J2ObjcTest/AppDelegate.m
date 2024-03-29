//
//  AppDelegate.m
//  J2ObjcTest
//
//  Created by Jesper Nielsen on 21/11/13.
//  Copyright (c) 2013 Trifork A/S. All rights reserved.
//

#import "AppDelegate.h"
#import "HelloWorld.h"
#import "JSONObject.h"
#import "ServerSettings.h"
#import "JSONArray.h"
#import "JSONTest.h"
@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Override point for customization after application launch.
//    HelloWorld *world = [[HelloWorld alloc] init];
//    [world doSomething];
    
//    JSONObject *json = [[JSONObject alloc] initWithNSString:@"{\"wuut\": \"foobar\"}"];
/*    JSONObject *json = [[JSONObject alloc] initWithNSString:@"{  \"MagicKey\": \"sI52JSfWYGY96JJqgHeP1wOEtI126VgvrsP+h+Y7fzN2WfBxtRPm3+5bTREtZJDmPIH0K5OznLQNE1w+h6HVJEUQoOb5D9JQpFK5/ScBML/XT4PfRMgZpbY1ZwyGIYZeyIik2I6cGRIIokckP2ReRQ==.\",  \"Status\": {    \"ParametersSentButNotUsed\": \"turnOffAirportSecurity=False\",    \"StatusCode\": 0,    \"StatusText\": null  },  \"LoginType\": \"ServiceCode\",  \"Settings\": {    \"Alerts\": [],    \"BaseURL\": \"http://app.danskebank.dk\",    \"BinaryVersion\": \"1.0.1.13\",    \"CameraSupported\": true,    \"ContactInformation\": {      \"ApplicationQuestions\": {        \"CountryCode\": \"+45\",        \"PersonalCall\": \"+45 70 105 501\",        \"PersonalDisplay\": \"70 105 501\",        \"PrivateCall\": \"+45 70 105 501\",        \"PrivateDisplay\": \"70 105 501\"      },      \"BecomeCustomer\": {        \"CountryCode\": \"+45\",        \"PersonalCall\": \"+45 70 10 17 08\",        \"PersonalDisplay\": \"70 10 17 08\",        \"PrivateCall\": \"+45 70 10 17 08\",        \"PrivateDisplay\": \"70 10 17 08\"      },      \"CancelCard\": {        \"CountryCode\": \"+45\",        \"PersonalCall\": \"+45 70 20 70 20\",        \"PersonalDisplay\": \"70 20 70 20\",        \"PrivateCall\": \"+45 70 20 70 20\",        \"PrivateDisplay\": \"70 20 70 20\"      },      \"ProductQuestions\": {        \"CountryCode\": \"+45\",        \"PersonalCall\": \"+45 70 123 456\",        \"PersonalDisplay\": \"70 123 456\",        \"PrivateCall\": \"+45 70 123 456\",        \"PrivateDisplay\": \"70 123 456\"      },      \"RealEstateQuestions\": {        \"CountryCode\": \"+45\",        \"PersonalCall\": \"+45 70 15 15 16\",        \"PersonalDisplay\": \"70 15 15 16\",        \"PrivateCall\": \"+45 70 15 15 16\",        \"PrivateDisplay\": \"70 15 15 16\"      },      \"Trading\": {        \"CountryCode\": \"+45\",        \"PersonalCall\": \"+45 +45 70 13 42 00\",        \"PersonalDisplay\": \"+45 70 13 42 00\",        \"PrivateCall\": \"+45 +45 70 13 42 00\",        \"PrivateDisplay\": \"+45 70 13 42 00\"      }    },    \"DefaultPapers\": [      \"DK0010274414\"    ],    \"HideCamera\": false,    \"LogonText\": \"For at logge på skal du indtaste bruger-id og servicekode. Du finder din servicekode i din netbank under Mobile tjenester.\",    \"MaxTransactionsMonths\": 13,    \"PhoneNumbers\": {      \"ApplicationQuestions\": \"+45 70 15 15 16\",      \"ApplicationQuestionsDisplay\": null,      \"BecomeCustomer\": \"+45 70 10 17 08\",      \"BecomeCustomerDisplay\": null,      \"CancelCard\": \"+45 70 20 70 20\",      \"CancelCardDisplay\": null,      \"ProductQuestions\": \"+45 70 123 456\",      \"ProductQuestionsDisplay\": null    },    \"RealEstateSettings\": {      \"AdjustableRate\": [        {          \"LongText\": \"FlexLån® F1\",          \"Mapping\": [            \"F1\",            \"FL1K\",            \"FL1T\"          ],          \"Prefix\": \"F1_\",          \"Text\": \"FlexLån® F1\",          \"Type\": \"F1\"        },        {          \"LongText\": \"FlexLån® F3\",          \"Mapping\": [            \"F3\",            \"FL3K\",            \"FL3T\"          ],          \"Prefix\": \"F3_\",          \"Text\": \"FlexLån® F3\",          \"Type\": \"F3\"        },        {          \"LongText\": \"FlexLån® F5\",          \"Mapping\": [            \"F5\",            \"FL5K\",            \"FL5T\"          ],          \"Prefix\": \"F5_\",          \"Text\": \"FlexLån® F5\",          \"Type\": \"F5\"        }      ],      \"MortgageLoanMappings\": [        {          \"Action\": \"fastforrentetobllaanberegner\",          \"FlexType\": \"\",          \"InterestOnly\": true,          \"ParamInterestOnly\": true,          \"ParamMaturity\": true,          \"ParamPerformance\": false,          \"RateField\": \"kurs\",          \"TK\": \"\",          \"Text\": \"Fastforrentet obl.\",          \"Type\": \"FF\",          \"YearInterval\": 1        },        {          \"Action\": \"flexgaranti6mlaanberegner\",          \"FlexType\": \"\",          \"InterestOnly\": true,          \"ParamInterestOnly\": true,          \"ParamMaturity\": true,          \"ParamPerformance\": false,          \"RateField\": \"kurs\",          \"TK\": \"\",          \"Text\": \"FlexGaranti®\",          \"Type\": \"FLGA\",          \"YearInterval\": 1        },        {          \"Action\": \"flexkberegner\",          \"FlexType\": \"F1K\",          \"InterestOnly\": true,          \"ParamInterestOnly\": true,          \"ParamMaturity\": true,          \"ParamPerformance\": false,          \"RateField\": \"kurs\",          \"TK\": \"K\",          \"Text\": \"FlexLån® F1\",          \"Type\": \"FL1K\",          \"YearInterval\": 1        },        {          \"Action\": \"flexkberegner\",          \"FlexType\": \"F3K\",          \"InterestOnly\": true,          \"ParamInterestOnly\": true,          \"ParamMaturity\": true,          \"ParamPerformance\": false,          \"RateField\": \"kurs3\",          \"TK\": \"K\",          \"Text\": \"FlexLån® F3\",          \"Type\": \"FL3K\",          \"YearInterval\": 3        },        {          \"Action\": \"flexkberegner\",          \"FlexType\": \"F5K\",          \"InterestOnly\": true,          \"ParamInterestOnly\": true,          \"ParamMaturity\": true,          \"ParamPerformance\": false,          \"RateField\": \"kurs5\",          \"TK\": \"K\",          \"Text\": \"FlexLån® F5\",          \"Type\": \"FL5K\",          \"YearInterval\": 5        },        {          \"Action\": \"flextberegner\",          \"FlexType\": \"F1T\",          \"InterestOnly\": false,          \"ParamInterestOnly\": false,          \"ParamMaturity\": false,          \"ParamPerformance\": true,          \"RateField\": \"kurs\",          \"TK\": \"T\",          \"Text\": \"FlexLån® T F1\",          \"Type\": \"FL1T\",          \"YearInterval\": 1        },        {          \"Action\": \"flextberegner\",          \"FlexType\": \"F3T\",          \"InterestOnly\": false,          \"ParamInterestOnly\": false,          \"ParamMaturity\": false,          \"ParamPerformance\": true,          \"RateField\": \"kurs3\",          \"TK\": \"T\",          \"Text\": \"FlexLån® T F3\",          \"Type\": \"FL3T\",          \"YearInterval\": 1        },        {          \"Action\": \"flextberegner\",          \"FlexType\": \"F5T\",          \"InterestOnly\": false,          \"ParamInterestOnly\": false,          \"ParamMaturity\": false,          \"ParamPerformance\": true,          \"RateField\": \"kurs5\",          \"TK\": \"T\",          \"Text\": \"FlexLån® T F5\",          \"Type\": \"FL5T\",          \"YearInterval\": 1        },        {          \"Action\": \"citaberegner\",          \"FlexType\": \"\",          \"InterestOnly\": true,          \"ParamInterestOnly\": true,          \"ParamMaturity\": true,          \"ParamPerformance\": false,          \"RateField\": \"kursflexkort\",          \"TK\": \"\",          \"Text\": \"FlexKort®\",          \"Type\": \"CITA\",          \"YearInterval\": 1        }      ],      \"Refinance\": [        {          \"InterestOnly\": true,          \"Mapping\": [            \"F1\",            \"FL1K\"          ],          \"RateField\": \"kurs\",          \"Text\": \"FlexLån® F1\",          \"Type\": \"FL1K\"        },        {          \"InterestOnly\": true,          \"Mapping\": [            \"F3\",            \"FL3K\"          ],          \"RateField\": \"kurs3\",          \"Text\": \"FlexLån® F3\",          \"Type\": \"FL3K\"        },        {          \"InterestOnly\": true,          \"Mapping\": [            \"F5\",            \"FL5K\"          ],          \"RateField\": \"kurs5\",          \"Text\": \"FlexLån® F5\",          \"Type\": \"FL5K\"        },        {          \"Mapping\": [            \"FL1T\"          ],          \"RateField\": \"kurs\",          \"Text\": \"FlexLån® T F1\",          \"Type\": \"FL1T\"        },        {          \"Mapping\": [            \"FL3T\"          ],          \"RateField\": \"kurs3\",          \"Text\": \"FlexLån® T F3\",          \"Type\": \"FL3T\"        },        {          \"Mapping\": [            \"FL5T\"          ],          \"RateField\": \"kurs5\",          \"Text\": \"FlexLån® T F5\",          \"Type\": \"FL5T\"        },        {          \"InterestOnly\": true,          \"Mapping\": [            \"FG\",            \"FLGA\"          ],          \"RateField\": \"kurs\",          \"Text\": \"FlexGaranti®\",          \"Type\": \"FLGA\"        },        {          \"InterestOnly\": true,          \"Mapping\": [            \"FF\",            \"FF30\"          ],          \"RateField\": \"kurs\",          \"Text\": \"Fastforrentet 3%\",          \"Type\": \"FF30\"        },        {          \"InterestOnly\": true,          \"Mapping\": [            \"FF35\"          ],          \"RateField\": \"kurs\",          \"Text\": \"Fastforrentet 3.5%\",          \"Type\": \"FF35\"        },        {          \"InterestOnly\": true,          \"Mapping\": [            \"FF40\"          ],          \"RateField\": \"kurs\",          \"Text\": \"Fastforrentet 4%\",          \"Type\": \"FF40\"        },        {          \"InterestOnly\": true,          \"Mapping\": [            \"FF50\"          ],          \"RateField\": \"kurs\",          \"Text\": \"Fastforrentet 5%\",          \"Type\": \"FF50\"        },        {          \"InterestOnly\": true,          \"Mapping\": [            \"FF60\"          ],          \"RateField\": \"kurs\",          \"Text\": \"Fastforrentet 6% eller derover\",          \"Type\": \"FF60\"        }      ],      \"StandardMortgage\": {        \"Action\": \"fastforrentetobllaanberegner\",        \"FlexType\": \"\",        \"InterestOnly\": true,        \"ParamInterestOnly\": true,        \"ParamMaturity\": true,        \"ParamPerformance\": false,        \"RateField\": \"kurs\",        \"TK\": \"\",        \"Text\": \"Fastforrentet obl.\",        \"Type\": \"FF\",        \"YearInterval\": 1      }    },    \"SecureMailEnabled\": true,    \"ShowReconciliation\": true,    \"TabletHelpURL\": \"\",    \"Timeout\": 40,    \"UseTwoFactorLogon\": false,    \"VerifySessionTimeout\": 40,    \"Version\": \"42\",    \"Welcome\": [],    \"WidgetSettings\": []  },  \"TokenCouldBeValidated\": true}"];
*/
    
//    ServerSettings *settings = [[ServerSettings alloc] initWithJSONObject:json];
    
//    [settings getDefaultPapers];
    
/*    HelloWorld *world = [[HelloWorld alloc]init];
    IOSObjectArray *array = [world doSomething];
    NSLog(@"%@",  [array objectAtIndex:1]);*/
    JSONTest *test = [[JSONTest alloc] init];
    NSLog(@"Date: %@",[test getDate]);
    
    
    return YES;
}
							
- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
