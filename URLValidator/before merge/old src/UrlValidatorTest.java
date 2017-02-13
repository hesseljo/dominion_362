/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


import org.junit.After;
import org.junit.Assert;
import org.junit.Before;

import junit.framework.TestCase;


/**
 * Performs Validation Test for url validations.
 *
 * @version $Revision: 1128446 $ $Date: 2011-05-27 13:29:27 -0700 (Fri, 27 May 2011) $
 */
public class UrlValidatorTest extends TestCase {

   private boolean printStatus = false;
   private boolean printIndex = false; //print index that indicates current scheme,host,port,path, query test were using.

   private String [] unitTestList = { "https://www.nytimes.com/",
		   "https://news.google.com/",
		   "http://www.cnn.com/",
		   "http://www.foxnews.com/",
		   "http://www.huffingtonpost.com/",
		   "http://www.drudgereport.com/"		   
   };

   public UrlValidatorTest(String testName) {
      super(testName);
   }

   public void testManualTest()
   {
	   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   System.out.println(urlVal.isValid("http://www.amazon.com")); // test valid URL and return true
	  
	   // Expected Valid URL's
	   System.out.println("manual valid: " + urlVal.isValid("http://www.google.com"));
	   System.out.println("manual valid: " + urlVal.isValid("https://www.google.com"));
	   System.out.println("manual valid: " + urlVal.isValid("http://www.google.com/page123"));
	   System.out.println("manual valid: " + urlVal.isValid("https://www.google.com/#q=url"));
	   System.out.println("manual valid: " + urlVal.isValid("https://www.google.com/#q=valid+urls"));
	   System.out.println("manual valid: " + urlVal.isValid("https://www.google.com:80"));
	   System.out.println("manual valid: " + urlVal.isValid("https://www.google.com:80/"));
	   System.out.println("manual valid: " + urlVal.isValid("https://google.com:80/")); 
	   
	   // Expected Invalid URL's
	   System.out.println("manual invalid: " + urlVal.isValid("www.google.com"));
	   System.out.println("manual invalid: " + urlVal.isValid("www.google.c"));
	   System.out.println("manual invalid: " + urlVal.isValid("google.com"));
	   System.out.println("manual invalid: " + urlVal.isValid("http"));
	   System.out.println("manual invalid: " + urlVal.isValid("http://"));
	   System.out.println("manual invalid: " + urlVal.isValid("google"));
	   System.out.println("manual invalid: " + urlVal.isValid("google.com/?=123"));
	   System.out.println("manual invalid: " + urlVal.isValid("http://www.google.com:80/../"));
	   System.out.println("manual invalid: " + urlVal.isValid("http/go.a:65a?action=edit&mode=up"));
	   System.out.println("manual invalid: " + urlVal.isValid("http/go.a:65a/test1//file?action=edit&mode=up"));
	   System.out.println("manual invalid: " + urlVal.isValid("://go.a1a:65a"));
   }
   
   //Second, come up with good input partitioning. Try to provide a varying set of inputs that partition the overall input set well. 
   //Did you find any failures? You can call valid method once or more for each partition. (3 points)
   // are we testing the different components here?
   public void testYourFirstPartition() {
	   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   System.out.println("1st partition with a valid scheme = true:  " + urlVal.isValid("http://www.google.com")); //bug here = does not account for http://
       System.out.println("1st partition with a invalid scheme = false: " + urlVal.isValid("://go.a1a:65a")); 
   }
   
   public void testYourSecondPartition() {
	   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
 	   System.out.println("2nd partition with valid port = true: " + urlVal.isValid("http://www.google.com:1000")); 
       System.out.println("2nd partition with invalid port = false: " + urlVal.isValid("http://www.google.com:100000.000")); 
   }
   
   public void testYourThirdPartition() {
       UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
 	   System.out.println("3rd partition with valid port = true: " + urlVal.isValid("http://www.google.com:1000")); 
       System.out.println("3rd partition with invalid port = false: " + urlVal.isValid("http://www.google.com:100000.000")); 
   }

   public void testYourFourthPartition() {
       UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
  	   System.out.println("4th partition with valid query = true: " + urlVal.isValid("http://google.com/something?id=1000")); 
       System.out.println("4th partition with invalid query = false: " + urlVal.isValid("http://google.com/something*id=1000")); 
   }

   public void testYourFifthPartition() {
       UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
 	   System.out.println("5th partition with valid path = true: " + urlVal.isValid("http://www.google.com/maps")); 
       System.out.println("5th partition with invalid path = false: " + urlVal.isValid("http://www.google.com/maps/moremaps/#../mymaps")); 

   }
   
   //Third, do programming based testing. Write few unit test cases. You can have some sort of loop in your unit test and test different url 
   //with each instance of loop. Something very similar to testIsValid() but your own logic and idea. 
   //Even a single test will be sufficient if you write it like testIsValid() method. Did you find any failures? 
   //Submit your test files and test cases as part of your work under your onid/URLValidator folder.   (5 points)
   public void testIsValid()
   {
	   for (int i = 0; i < unitTestList.length; i++ ) {
		   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
		   System.out.println("testIsValid: " + urlVal.isValid(unitTestList[i]));
	   }
   }
   
   public void testAnyOtherUnitTest()
   {
	   
	   
	   
   }
   /**
    * Create set of tests by taking the testUrlXXX arrays and
    * running through all possible permutations of their combinations.
    *
    * @param testObjects Used to create a url.
    */
   

}
