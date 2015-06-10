If you want to start help developing ownCloud please follow the [contribution guidelines][0] and observe these instructions:

### 1. Fork and download ios-issues/develop repository:

NOTE: To compile the code you need xcode 6 or above.
  
* Navigate to https://github.com/owncloud/ios, click fork.
* Clone your new repo: "git clone git@github.com:YOURGITHUBNAME/ios.git"
* Move to the project folder with "cd ios"
* Checkout remote develop branch: "git checkout -b develop remotes/origin/develop"
* Pull changes from your develop branch: "git pull origin develop"
* Make official ownCloud repo known as upstream: "git remote add upstream git@github.com:owncloud/ios.git"
* Make sure to get the latest changes from official ios-issues/develop branch: "git pull upstream develop"

### 2. Add the ownCloud iOS library:

NOTE: This will connect with our ownCloud iOS Library repository at "https://github.com/owncloud/ios-library".

* Inside the folder ios:
  - Init the library submodule: "git submodule init"
  - Update the library submodule: "git submodule update"

### 3. Create pull request:
  
NOTE: You must sign the [Contributor Agreement][1] or contribute your code under the [MIT license][2] before your changes can be accepted! See the [iOS license exception][3] for testing the ownCloud iOS app on Apple hardware.

* Commit your changes locally: "git commit -a"
* Push your changes to your Github repo: "git push"
* Browse to https://github.com/YOURGITHUBNAME/ios/pulls and issue pull request
* Click "Edit" and set "base:develop"
* Again, click "Edit" and set "compare:develop"
* Enter description and send pull request.

### 4. Create another pull request:

To make sure your new pull request does not contain commits which are already contained in previous PRs, create a new branch which is a clone of upstream/develop.

* git fetch upstream
* git checkout -b my_new_develop_branch upstream/develop
* If you want to rename that branch later: "git checkout -b my_new_develop_branch_with_new_name"
* Push branch to server: "git push -u origin name_of_local_develop_branch"
* Use Github to issue PR


[0]: https://github.com/owncloud/ios/CONTRIBUTING.md
[1]: https://owncloud.org/about/contributor-agreement/
[2]: http://opensource.org/licenses/MIT
[3]: https://owncloud.org/contribute/iOS-license-exception/
