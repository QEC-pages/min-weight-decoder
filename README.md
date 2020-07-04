You should have write access to this repo. If not, contact weilei.

write access means that after you run "git clone", you will be able to run "git push". You will also be able to merge pull request on GitHub.


# min-weight-decoder

write a min weight decoder for Hamming code, both clasical and quantum.

- [7,4,3] classical code
- [[7,1,3]] quantum code



# TODO
create a branch, edit info in the following format, and then send your update to master branch.

## list of branches
- master
  - main branch. For a small project, one edit everything in master branch. For a relatively large project, or a project maintained by multiple people, one usually edit in other branch and only send stable update to master branch.
- weilei
  - created by weilei
- branch name
  - info

## cmd
to do it locally
```
git clone ...
git checkout -b new-branch
(now edit files as you like...)
git status
git add -A
git commit -m "what I have done?"
git checkout master
git merge new-branch
git checkout new-branch
(continue editing and repeat)
```
You may get a conflict error if someone else updated the master branch. To resolve it, it is better to pull all updates to your branch first.
```
git checkout new-branch
git check master
(It will show you if there is a conflict. If yes, find the file and edit it. Then commit the changes)
git checkout master
git check new-branch
```

To edit it locally and send pull request on GitHub
```
git checkout -b new-branch
(edit files and commit)
git push --set-upstream origin new-branch
(Now you have update the new branch to github. Go to github and make a pull request from new-branch to master)
```

## More on coding
It is optional, but if you feel it useful, write a min weight decoder in C/C++ or GAP. You can use existing code as well.

Sample code: 
https://github.com/WeileiZeng/weilei_lib/blob/doc/dist.h
https://github.com/WeileiZeng/weilei_lib/blob/doc/dist.cpp
https://github.com/WeileiZeng/weilei_lib/blob/master/test_lib.cpp
